/*************************************************** ABOUT *****************************************************/
/*
SCRIPT NAME: OAUTH_Demo_Dev
AUTHOR: DHINESHBABU MUTHURAJ
DATE RECORDED: 12/02/2020
FUNCTIONALITY: Script will get the access token after logging in and authorized using GitHub
*/

A01_OAuth2_Login()
{
	
	int thinktime = 2;

	web_cache_cleanup();
	web_cleanup_cookies();
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	/******  COMMENT: Launch the homepage URL from browser  ******/
	
	web_reg_find("SaveCount=T01_TextSearch",
		"Text=Happy to see you",
		LAST);

	lr_start_transaction("OAUTH_S01_Demo_T01_LaunchHome");
	

	web_url("{P_Host}", 
		"URL=http://{P_Host}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
	if(atoi(lr_eval_string("{T01_TextSearch}")) > 0) {
		lr_end_transaction("OAUTH_S01_Demo_T01_LaunchHome", LR_PASS);
	} else {
		lr_end_transaction("OAUTH_S01_Demo_T01_LaunchHome", LR_FAIL);
		return 0;
	}	
	
	lr_think_time(thinktime);


	/******  COMMENT: Click Signin with GitHUb ******/


	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	//https://github.com/login/oauth/authorize?client_id={C_clientid}
	
	web_reg_save_param("C_clientid", "LB=github.com/login/oauth/authorize?client_id=","RB=HTTP/1.1 302", LAST);
	
	//<input type="hidden" name="authenticity_token" value="{C_authenticity_token}" /> 
	
	web_reg_save_param("C_authenticity_token", "LB=type=\"hidden\" name=\"authenticity_token\" value=\"","RB=\" />", LAST);
	
	//<input type="text" name="required_field_{C_required_field}" hidden="hidden" class="form-control" />
	
	web_reg_save_param("C_required_field", "LB=input type=\"text\" name=\"required_field_","RB=\" hidden=\"hidden\" class=\"f", LAST);
	
	//<input type="hidden" name="timestamp" value="{C_timestamp}" class="form-control" />
	
	web_reg_save_param("C_timestamp", "LB=<input type=\"hidden\" name=\"timestamp\" value=\"","RB=\" class=\"form-control\" />", LAST);
	
	//<input type="hidden" name="timestamp_secret" value="{C_timestamp_secret}" class="form-control" />
	
	web_reg_save_param("C_timestamp_secret", "LB=<input type=\"hidden\" name=\"timestamp_secret\" value=\"","RB=\" class=\"form-control\" />", LAST);
	
	web_reg_find("SaveCount=T02_TextSearch",
		"Text=<title>Sign in to GitHub",
		LAST);
	
	lr_start_transaction("OAUTH_S01_Demo_T02_ClickSignInWithGitHub");

	web_url("auth", 
		"URL=http://{P_Host}/auth", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_Host}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
	
	if(atoi(lr_eval_string("{T02_TextSearch}")) > 0) {
		lr_end_transaction("OAUTH_S01_Demo_T02_ClickSignInWithGitHub", LR_PASS);
	} else {
		lr_end_transaction("OAUTH_S01_Demo_T02_ClickSignInWithGitHub", LR_FAIL);
		return 0;
	}	
	
	lr_think_time(thinktime);

	/******  COMMENT: Enter Github Credentials and Click Login ******/
	
	//<meta http-equiv="refresh" content="0;url=http://localhost:3001/oauth-callback?code={C_Code}" 
	
	web_reg_save_param("C_Code", "LB=oauth-callback?code=","RB=\" data-url=\"", LAST);

	web_reg_save_param("C_OAuthToken", "LB=Location: /?token=","RB=\r\n", LAST);
	
	lr_start_transaction("DB_S01_Deposit_T03_EnterCredentials_Login");

	web_submit_data("session", 
		"Action=https://github.com/session", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://github.com/login?client_id={C_clientid}&return_to=%2Flogin%2Foauth%2Fauthorize%3Fclient_id%3D{C_clientid}", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=commit", "Value=Sign in", ENDITEM, 
		"Name=authenticity_token", "Value={C_authenticity_token}", ENDITEM, 
		"Name=ga_id", "Value=", ENDITEM, 
		"Name=login", "Value={P_GitUserName}", ENDITEM, 
		"Name=password", "Value={P_GitPassword}", ENDITEM, 
		"Name=webauthn-support", "Value=supported", ENDITEM, 
		"Name=webauthn-iuvpaa-support", "Value=unsupported", ENDITEM, 
		"Name=return_to", "Value=/login/oauth/authorize?client_id={C_clientid}", ENDITEM, 
		"Name=allow_signup", "Value=", ENDITEM, 
		"Name=client_id", "Value={C_clientid}", ENDITEM, 
		"Name=integration", "Value=", ENDITEM, 
		"Name=required_field_{C_required_field}", "Value=", ENDITEM, 
		"Name=timestamp", "Value={C_timestamp}", ENDITEM, 
		"Name=timestamp_secret", "Value={C_timestamp_secret}", ENDITEM, 
		EXTRARES, 
		//"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAmdjA2tpcwJ2MgNzY3IOa2FzcGVyc2t5LWxhYnMDY29tAAABAAEAACkQAAAAAAAAQwAMAD8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);
	
	if(strcmp(lr_eval_string("{C_OAuthToken}"), "undefined")==0) {
		lr_end_transaction("DB_S01_Deposit_T03_EnterCredentials_Login", LR_FAIL);
		return 0;
	} else {
		lr_end_transaction("DB_S01_Deposit_T03_EnterCredentials_Login", LR_PASS);
	}
	
	lr_output_message("Received OAuth Token: %s", lr_eval_string("{C_OAuthToken}"));

	/*
	//Location: /?token=af7e27d67d1d62bc379c161d243e840485e897b8
	
	web_reg_save_param("C_OAuthToken", "LB=Location: /?token=","RB=", LAST);
	
	web_url("oauth-callback", 
		"URL=http://{P_Host}/oauth-callback?code={C_Code}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);
	*/
	
	

	return 0;
}