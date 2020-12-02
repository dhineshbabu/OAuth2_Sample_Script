Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"87\", \"\\\"Not;A\\\\Brand\";v=\"99\", \"Chromium\";v=\"87\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_url("localhost:3001", 
		"URL=http://localhost:3001/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI4QrYVAOleQUPp24IzX4NdrvuJ3Wve3IiwxNdaj_3Xie90_AgK59XpjPyocwPDuTI98I8JPXjh-PHeGwyB6QcSStzyp7emUJeyakqHUkbN_o1IPGrKjXOOsuvv-AOIJpdXZlJN-el54ecZboah31wqupgkLiC-nlKVEGnDDBcuQWqVDX4HUNw97dARBho1S0JlahwJMw74vYaraGn6Z28yyVVSpc6mMR5ocXyXtkZOsECDmmR32BboyuguXdA0bQahMSbWsoSQ38Cz2_PhOhnwHgwc4w1hAmQkHeXOv7kTP8RVOtsM; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQI0pAB; DOMAIN=accounts.google.com");

	web_add_cookie("ANID=AHWqTUkw6vypr1zU4b9qWtMDYB8-szmga_LukbKdPhxIOTGPOX_PmG6IItp5yDDv; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2020-12-02-03; DOMAIN=accounts.google.com");

	web_add_cookie("NID=204=gFuynkKdV-zheuqTNUzJid5R630q7dPofBYG6MyHC4DvLu9wDfSD_eg4_76qi1x-Qq7J3j5TvA-s2KF3soDWeXYGxgIOqzUZJDrud7XQwKpPdmlTlpiUhuy_fRRdOR5PDhYA18bBYHR6KyZKeSF6Exg9Lm5x4v9DpPF1QCYBvrLqENY7XXzmkby7uub6xeyBzeMo8mR38MkGOeAf9R2Q; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:DTfINYiYaPGcfusYsxClfZ1g5kcDSNIV13vQ5rJc4i70_s-zXdqz0rdxfLg5GqkOzj8LOoercFAV_16hnLoBpNjGT4bA2jaQCJXQigcoemKQBRqEDIKnMi9_Q72AtJvBPqxub5Y4wI0LLw:RdFqk6QmCC4L3d-o; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(12);

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=87", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_6.pb", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("_ga=GA1.2.660291669.1540230645; DOMAIN=sec-tws-prod-vip.webex.com");

	web_add_cookie("AMCV_5C0A123F5245AEEA0A490D45%40AdobeOrg=-330454231%7CMCIDTS%7C17954%7CMCMID%7C33134040184154537372368995207871490042%7CMCAAMLH-1551761274%7C3%7CMCAAMB-1551761274%7CRKhpRz8krg2tLO6pguXWp5olkAcUniQYPHaMWWgdJ3xzPWQmdj0y%7CMCOPTOUT-1551163673s%7CNONE%7CMCAID%7C2DC5B18F852A1772-6000011820051DD9%7CvVersion%7C3.1.2; DOMAIN=sec-tws-prod-vip.webex.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"chrome-extension://jlhmfgmfgeifomenelglieieghnjghma");

	web_add_header("appId", 
		"65014E32-67C8-4698-9D92-9528BE74F65A");

	web_add_header("appName", 
		"Cisco-WebEx-Extension");

	web_add_header("confId", 
		"00000000");

	web_add_header("metricsTicket", 
		"YzJWakxYUjNjeTF3Y205a0xYWnBjQzUzWldKbGVDNWpiMjA9");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"87\", \"\\\"Not;A\\\\Brand\";v=\"99\", \"Chromium\";v=\"87\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("siteId", 
		"000000");

	web_add_header("timeStamp", 
		"1606881142935");

	web_add_header("ver", 
		"2.0");

	web_custom_request("v1", 
		"URL=https://sec-tws-prod-vip.webex.com/metric/v1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"telemetrics\":[{\"t\":\"PageView\",\"ts\":\"2020-12-02T09:22:22.937+0550\",\"tid\":\"e052097a-23ee-7ad8-3230-2d853c34889b\",\"cid\":\"4545bd72-b257-e788-e352-ba6c9bd0ad81\",\"pd\":\"unknown\",\"ver\":\"2.0\",\"v\":{\"title\":\"\",\"location\":\"chrome-extension://jlhmfgmfgeifomenelglieieghnjghma/_generated_background_page.html\"}}]}", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA2FwaQhtaXhwYW5lbANjb20AAAEAAQAAKRAAAAAAAABTAAwATwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAmdjA2tpcwJ2MgNzY3IOa2FzcGVyc2t5LWxhYnMDY29tAAABAAEAACkQAAAAAAAAQwAMAD8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_url("decide", 
		"URL=https://api.mixpanel.com/decide/?verbose=1&version=1&lib=web&token=94b5c311692e7c9d03cef9c9a7a32eaf&ip=1&_=1606881166081", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBWZvbnRzB2dzdGF0aWMDY29tAAABAAEAACkQAAAAAAAAUgAMAE4AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/arvo/v14/tDbD2oWUg0MKqScQ7Q.woff2", "Referer=https://fonts.googleapis.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/kumbhsans/v1/c4ml1n92AsfhuCq6tVsaioBd-Q.woff2", "Referer=https://fonts.googleapis.com/", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"chrome-extension://mbopgmdnpcbohhpnfglgohlbhfongabi");

	web_submit_data("track", 
		"Action=https://api.mixpanel.com/track/?verbose=1&ip=1&_=1606881181032", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data", "Value="
		"WwogICAgeyJldmVudCI6ICIkd2ViX2V2ZW50IiwicHJvcGVydGllcyI6IHsiJG9zIjogIldpbmRvd3MiLCIkYnJvd3NlciI6ICJDaHJvbWUiLCIkY3VycmVudF91cmwiOiAiY2hyb21lLWV4dGVuc2lvbjovL21ib3BnbWRucGNib2hocG5mZ2xnb2hsYmhmb25nYWJpL19nZW5lcmF0ZWRfYmFja2dyb3VuZF9wYWdlLmh0bWwiLCIkYnJvd3Nlcl92ZXJzaW9uIjogODcsIiRzY3JlZW5faGVpZ2h0IjogMTA4MCwiJHNjcmVlbl93aWR0aCI6IDI1NjAsIm1wX2xpYiI6ICJ3ZWIiLCIkbGliX3ZlcnNpb24iOiAiMi4zOS4wIiwiJGluc2VydF9pZCI6ICJodWt6czIwMmhlajkxNDg2IiwidGltZSI6IDE2MDY4ODExNzkuMTE0LCJkaXN0aW5jdF9pZCI6IDMzOTE3MCwiJGluaX"
		"RpYWxfcmVmZXJyZXIiOiAiJGRpcmVjdCIsIiRpbml0aWFsX3JlZmVycmluZ19kb21haW4iOiAiJGRpcmVjdCIsIiR0aXRsZSI6ICIiLCIkZXZlbnRfdHlwZSI6ICJwYWdldmlldyIsIiRjZV92ZXJzaW9uIjogMSwiJGhvc3QiOiAibWJvcGdtZG5wY2JvaGhwbmZnbGdvaGxiaGZvbmdhYmkiLCIkcGF0aG5hbWUiOiAiL19nZW5lcmF0ZWRfYmFja2dyb3VuZF9wYWdlLmh0bWwiLCJ0b2tlbiI6ICI5NGI1YzMxMTY5MmU3YzlkMDNjZWY5YzlhN2EzMmVhZiJ9fQpd", ENDITEM, 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBW10YWxrBmdvb2dsZQNjb20AAAEAAQAAKRAAAAAAAABTAAwATwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blakpkgjpemejpbmfiglncklihnhjkij,blpcfgokakmgnkcojhhkbfbldkacnbeo,cfhdojbkjhnklbpkdaibdccddilifddb,chklaanhfefbnpoihckbnefhakgolnmc,felcaaldnbdncclmgdcncolpebgiejap,fhbjgbiflinjbdggehcddcbncdddomop,fipcbkgepjlnemlkgialpomkajcpneop,fmkadmapgofadopljbjfkapdkoienihi,ghbmnnjooekpmoecnnnilnnbdlolhkhi,jlhmfgmfgeifomenelglieieghnjghma,jopjeaiilkcibeohjdmejhoifenbnmlh,lcknjpenlfdlffeafcadkbjfodmmgdip,"
		"lmjegmlicamnimmfhcmpkclmigmmcbeh,mbopgmdnpcbohhpnfglgohlbhfongabi,nakklajdcijlkfagghhcdofbgbhddoed,nmmhkkegccagdldgiimedpiccmgmieda,ojhbgcchcbdjdenibfmjofobklkkhofc,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-87.0.4280.66");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:2942810626&cup2hreq=ad66c691e7a51e25fe009c6f8865b9414195c881cbe551cebb4ba1a04bc09899", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{42e84013-3bf5-443f-84b1-d6d9b2e54424}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{b5d23912-65dc-45a0-b329-313200ba8c03}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.d7089602fa181dfd161165dc1bb34271e7481f88ee2ca06230da2a2269a68c80\"}]},\"ping\":{\"ping_freshness\":\"{479ffabb-1dca-40b3-b746-b6f711d1e694}\",\"rd\":5083},\"updatecheck\":{},"
		"\"version\":\"14.5\"},{\"appid\":\"blakpkgjpemejpbmfiglncklihnhjkij\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.0.0.26\"}]},\"ping\":{\"ping_freshness\":\"{5426675b-c108-4da5-a492-495a8aa22074}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"0.0.0.26\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\""
		"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{48d001ef-e319-4aa4-874c-d4f3d4020281}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"cfhdojbkjhnklbpkdaibdccddilifddb\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.6dcef1940d9d6a86ee641155e7099fb5d0195418850278177873f7e888d060c3\"}]},\"ping\":{\"ping_freshness\":\"{20e40965-7a8e-4759-8b63-b1cc5d2d4f2a}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"3.10\"},{\"appid\":\""
		"chklaanhfefbnpoihckbnefhakgolnmc\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.0.32.3\"}]},\"ping\":{\"ping_freshness\":\"{1c71b47e-94d9-4376-a653-48698568aa3d}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"0.0.32.3\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\""
		"{4b727dd4-1e90-4be2-baeb-5871380868ea}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"fhbjgbiflinjbdggehcddcbncdddomop\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.be17c5b273ae5ca03156edd24af9d6c7099fcba9654e9755cfd2e9477555e13e\"}]},\"ping\":{\"ping_freshness\":\"{5f11edc3-650c-4403-afb1-80c8eaf8de4d}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"5.5.5\"},{\"appid\":\"fipcbkgepjlnemlkgialpomkajcpneop\",\"brand\":"
		"\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.16.0.0.15\"}]},\"ping\":{\"ping_freshness\":\"{8d816ff7-50ff-42ff-b417-4e24515553c4}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"16.0.0.15\"},{\"appid\":\"fmkadmapgofadopljbjfkapdkoienihi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.d410998f95ccd87dd6d66193eed17f23f1b76ceb8fe7bc242e35e97504364106\"}]},\"ping\":{\"ping_freshness\":\""
		"{c7509744-49cd-4861-a351-99f10d8cd38b}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"4.10.0\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.2efb05ac54de9cb374eaf236f5d4a95fd553be6a6b92c154f0f51c7f6b261877\"}]},\"ping\":{\"ping_freshness\":\"{bd25bed2-165c-49d0-be72-1a0a6f6e94a8}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"1.21.0\"},{\"appid\":\"jlhmfgmfgeifomenelglieieghnjghma\",\""
		"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.91a2d1382b88442b72513a1940f86872d89537e292c53dc233f6f1c732b59c60\"}]},\"ping\":{\"ping_freshness\":\"{24a95e1f-91bb-4787-a28e-348109ca7b78}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"1.9.0\"},{\"appid\":\"jopjeaiilkcibeohjdmejhoifenbnmlh\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3.4.0\"}]},\"ping\":"
		"{\"ping_freshness\":\"{f3159f79-951c-4b20-8961-0fd15cee4f9c}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"3.4.0\"},{\"appid\":\"lcknjpenlfdlffeafcadkbjfodmmgdip\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.2\"}]},\"ping\":{\"ping_freshness\":\"{d6b1e79c-0c0a-4c64-85cc-6a704e8af3d5}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"2\"},{\"appid\":\"lmjegmlicamnimmfhcmpkclmigmmcbeh\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":8192}],\""
		"enabled\":false,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.f65aba0b25837c5b1bd91902737fb8049a7f1c7df0ea3bdfd3949bc5548c2da3\"}]},\"ping\":{\"ping_freshness\":\"{94bf5fe7-ec0f-41c3-995b-ea0900529d32}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"3.3\"},{\"appid\":\"mbopgmdnpcbohhpnfglgohlbhfongabi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.554be63c773df6c22f6e966e9dfc1388b6f6f47acf2bbb9aac1666224c27273f\"}]},"
		"\"ping\":{\"ping_freshness\":\"{df9d3817-5f26-4e4e-b439-eff9be072fb2}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"4.9.13\"},{\"appid\":\"nakklajdcijlkfagghhcdofbgbhddoed\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.2\"}]},\"ping\":{\"ping_freshness\":\"{2c7c9419-8acf-436e-bddb-e99e7104c597}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"2\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GGLS\",\"enabled\":true,\""
		"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{8d462cd3-c448-4d79-8088-b3f2e483cef9}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"ojhbgcchcbdjdenibfmjofobklkkhofc\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.3\"}]},\"ping\":{\"ping_freshness\":\"{6c51d7ee-568e-48bf-a3a8-18ca16a4e77b}\",\"rd\":5083},\"updatecheck\":{},"
		"\"version\":\"4.3\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.7f4e382d1c6724a5f173f3617e35d5ad74c28ffce9a918f00b48c88f978dc34e\"}]},\"ping\":{\"ping_freshness\":\"{f444d0ce-8d08-4f01-b9ec-ec5d32b0a14c}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.c54ade3508609ae6acc8224bc245e529d28b5d1284f28b8071d001035879c59d\"}]},\"ping\":{\"ping_freshness\":\"{09b23d68-499a-4f73-83ce-de00c838ac8b}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"8720.1005.0.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":8},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19041.630\"},\"prodversion\":\"87.0.4280.66\",\"protocol\":\"3.1\",\"requestid\""
		":\"{a25279fc-5a00-4c54-8c5c-caee55391b2c}\",\"sessionid\":\"{74716127-4e28-4299-873f-42c2cf5dc54b}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.32\"},\"updaterversion\":\"87.0.4280.66\"}}", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"6tnVkzIEw63cnQK4kOTJPZiqoFkafc3TNhwkRqkNGxY=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"31415111EA55DE72977FBA3EF26D9960F3EC357B");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAE=");

	lr_think_time(4);

	web_custom_request("v2", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"BodyBinary=\tq\\x80\\xAC\\xBB\\x9B\\xB5U\\xC2\\x10\\xBA\\x05\\x1A\\xAF\\x08\\x08\\xF5\\xC7\\xCC\\xFD\\x05\\x12\\x0F87.0.4280.66-64\\x18\\xB0\\xB3\\x87\\xCE\\x05\"\\x05en-US*\\x18\n\nWindows NT\\x12\n10.0.190412V\n\\x06x86_64\\x10\\xA4?\\x18\\x80\\x80\\xC0\\xCC\\xD3\\xFF\\x1F\"\\x00(\\x010\\x80\\x148\\xB8\\x08B\n\\x08\\x00\\x10\\x00\\x1A\\x002\\x00:\\x00M\\xA9\\xF7\\xA2BUsC\\xA4Be\\x00\\x00\\x80?j\\x16\n\\x0CGenuineIntel\\x10\\xD1\\x8C\\x10\\x18\\x04 \\x00\\x82\\x01\\x00\\x8A\\x01\\x00B\r"
		"\\x10\\x0Bx\\x01\\xA8\\x01\\x01\\xD0\\x01\\x04\\xD8\\x01\tJ\n\r]s\\x81\\xAF\\x15\\x80\\x8D}\\xCAJ\n\r1V\\x08\\x84\\x15\\xCF\\xA1\\x02\\xABJ\n\r[\\x07\\xA7\\x90\\x15\\x97:\\x89\\xD2J\n\r\\xD3\\x11\\xF9D\\x15\\xFBZ\\xF17J\n\rT`\\xB1\\x16\\x15\\x80\\x8D}\\xCAJ\n\r#\\xF6\\xF8\\x91\\x15\\x80\\x8D}\\xCAJ\n\r\\x12\\xF4\\xB6Y\\x15\\x80\\x8D}\\xCAJ\n\rR\\xB3\\xD4`\\x15\\x80\\x8D}\\xCAJ\n\r>\\xC6R\\x1D\\x15\\x80\\x8D}\\xCAJ\n\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n\r\\x08J`\\x9E\\x15\\xA2\\xE6\\xED\\x12J\n\r"
		"R\\xB0Az\\x15\\x80\\x8D}\\xCAJ\n\r|~;\\x81\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x03\\\\\\xA3E\\x15\\x80\\x8D}\\xCAJ\n\r\\x06\\x08We\\x15\\x11\\xD7eoJ\n\r\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n\r\\x1D|'m\\x15U'\\xAB\\x90J\n\rK\\xADB0\\x15\\x80\\x8D}\\xCAJ\n\r\\xE9W\\xA3\\xE4\\x15\\x80\\x8D}\\xCAJ\n\r\\xD3\\x0Euh\\x15Z\\xE5{7J\n\r\\xCD\\xE4)\\xC1\\x15Z\\xE5{7J\n\r\\xA7\\x13\\x0C\\x86\\x15\\x80\\x8D}\\xCAJ\n\r\\xEB\\x04A\\xD2\\x15\\x80\\x8D}\\xCAJ\n\r\\xCA\\x84gg\\x15\\xA2\\xE6\\xED\\x12J\n\r(\\xB6)"
		"'\\x15o\\xC1\\xB5KJ\n\rm#:^\\x15\\xD0\\x86\\xE2YJ\n\rM\\xC7\\xB3\\xFA\\x15\\x80\\x8D}\\xCAJ\n\r\\xD7X.\\x14\\x15\\x80\\x8D}\\xCAJ\n\r\\xD6\\xA0\\xC0R\\x15\\xEC\\x9Ew\\xB4J\n\r\\xF1u\\\\\\x9E\\x15\\xCF\\xC0\\xA5\\xC8J\n\r<d\\x03\\xF4\\x15\\xAA\\xB4!#J\n\r\\x82$i\\xD8\\x15\\x80\\x8D}\\xCAJ\n\r\\x85\\x86/ \\x15\\xEC\\x9Ew\\xB4J\n\r\\xAE8\\x8Ec\\x15\\x90\\xC5\\xB2\\xDFJ\n\r\\xA1\\xC4\\xBC\\xBD\\x15\\x82Z\\x03DJ\n\r\\xE4\\x0B\\x99/\\x15\\x80\\x8D}\\xCAJ\n\rZ\\x9A\\xC9S\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xBDoV\\xD3\\x15\\x80\\x8D}\\xCAJ\n\rjX\\x85\\xAE\\x15\\x80\\x8D}\\xCAJ\n\r\\xA6\\x03\\xA3N\\x15\\x0E%\\xBB\\xECJ\n\r\\xA5m\\xA4z\\x15P\\xB1F\\xC9J\n\rl\\x07\\xF4\\xD6\\x15\\x80\\x8D}\\xCAJ\n\rq\\x95]l\\x15Z\\xE5{7J\n\r\\xEC]\\xBE)\\x15\\x1D3\\xCBGJ\n\rc\\xC9\\xA3\\xD8\\x15\\x80\\x8D}\\xCAJ\n\r\\xFD\\x87V\\xA0\\x15\\xCD_\\xE0mJ\n\r\\xBEp\\xFF\\xD0\\x15\\x80\\x8D}\\xCAJ\n\rr_\\x1C\\x93\\x15yF\\x0F\\x1BJ\n\r`\\x87MI\\x15C]2RJ\n\r*\\xE8z\\xF4\\x15\\xE5.\\xF2\\x86J\n\rU\\x08\\xC6:\\x15\\x9C*nHJ\n\r"
		"\\xA3\\xB6\\xDCc\\x15\\xD0\\xE0\\x90\\xDAJ\n\rF\\xE7\\x06\\xE7\\x15' \\x83\\xACJ\n\r\\x0C\\x19\\x96\\xF2\\x15P\\xE3\\x9A:J\n\r\\xE2\\xAABD\\x15c(\\x82\\xA5J\n\rd\\xCF\\x90\\xF6\\x15\\xE7\\xFF\\xDFkJ\n\rw\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xA0\\xF0\\xF0u\\x15u\\x05\\xD6JJ\n\r\\x81\\x84\\xB1\\xE2\\x15u\\x05\\xD6JJ\n\r\\x89\\x18\\xE7\\xE7\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\x0Bh\\xF9\r\\x15\\x80\\x8D}\\xCAJ\n\r\\x9F\\xCA\\xC4\\xFF\\x15\\xA5Xc\\x13J\n\rzZ?\\x7F\\x15\\x03\\xF5\\xFEeJ\n\r\\x9A,"
		"J*\\x15\\xBB\\x06\\x18\\xF6J\n\r/\\xE4\\xB2\\x8D\\x15\\x80\\x8D}\\xCAJ\n\r\\xF9>?\\xB5\\x15\\x80\\x8D}\\xCAP\\x04Z\\x02\\x08\\x00b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x00\\x18\\x00 \\x068\\x00@\\x00\\x80\\x01\\xB0\\xB3\\x87\\xCE\\x05\\x98\\x01\\x00\\xB0\\x01\\x01\\xE2\\x01\\x1620201201-235624.138277\\xF8\\x01\\xC17\\x80\\x02\\xFD=\\x88\\x02\\x01\\x92\\x02$7df55d2a-4b2d-4625-97bf-2c1a68ba83812\\x0F\t\\x17\\xF9\\xCB\\xEA\\x16s\\xCD\\x8C\\x10d\\x1A\\x02\\x10e2\\x0F\t"
		"\\xEB\\x82h-\\xB8\\x12\\x0E\\xFC\\x10\\x01\\x1A\\x02\\x10\\x022\r\tVM\\xC4\\xD3\\xE0\\x1D],\\x1A\\x02\\x10\\x01", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,mimojjlkmoijpicakmndhoigimigcmbb,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hnimpnehoodheedghdeeijklkeaacbdc,cmahhnpholdijhjokonmfdjbfmklppij,obedbbhbpmojnkanicioggnmelmoomoc,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,hfnkpimlhhgieaddgfemjhofmfblmnib,aemomkdncapdnfajjbbcbdebjljbpmpj,gkmgaooipdjhmangpemjhigmamcehddo,ehgidpndbllacpjalkiimkbadgjfnnmc,"
		"jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,bklopemakmnopmghhmccadeonafabnal,ojhpjlocmbogdgmfpkhlaaeamibhnphh,eeigpngbgcognadeebkilcpcaedhellh");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-87.0.4280.66");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:1799541844&cup2hreq=47e15d52a9cfecbb8c5698f4ef26b240b42aeabba38141445f6111225508107c", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohortname\":\"Auto\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{aa246311-cb7a-4ce5-a8c9-bb76de492a84}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\""
		":true,\"packages\":{\"package\":[{\"fp\":\"1.d5ea04e364a1b5c7e2739dfc53e5df79b1ab6ff5c4b8d3077bfa7c3fbf7a0554\"}]},\"ping\":{\"ping_freshness\":\"{2f5d3409-90d0-4cc3-8741-87260b3ebbc0}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"32.0.0.453\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{6bac88ac-8fb6-49f7-85f9-13d8a35dba32}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"4.10.1679.0\"},{\"appid\":\""
		"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:xa9@0.01\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3c7a41cee94e225a40d1158c97cf08f3039bfc9b1c9102745eca434c6f6994db\"}]},\"ping\":{\"ping_freshness\":\"{29f83d32-7c34-4492-9aea-467d65e61827}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"9.18.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package"
		"\":[{\"fp\":\"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\"}]},\"ping\":{\"ping_freshness\":\"{e2e3da4c-8d9d-4568-84cb-c3e2cff6d1f1}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GGLS\",\"cohort\":\"1:wr3:x23@0.01\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{7b85e2a6-47e8-4987-9ff4-4e287d75c9a6}\",\"rd\":5083},\"updatecheck\":{},\"version\":\""
		"0.0.0.0\"},{\"accept_locale\":\"ENUS\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9995584823430547e66d746bb3dda0c36ca73f90e823f549af442c82d31536e9\"}]},\"ping\":{\"ping_freshness\":\"{dfc44ab9-bb28-48e8-95a7-a49aa34b2c0a}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"20201112.343270483\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a5267dbf664b6b4a35841b147e1c4864ba1466c5de1505ce7793f63ae46fca12\"}]},\"ping\":{\"ping_freshness\":\"{bfa46b95-bdf2-4338-a61d-80c52ffcd635}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"2020.12.2.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\""
		":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{20931885-3eca-4a98-aab8-4db4a741b201}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4\"}]},\"ping\":{\""
		"ping_freshness\":\"{88722c16-1175-48ef-a63b-c714fab25a66}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"43\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.62fca93b66ce468f2e445a0c0aee3643e7946aae6f6c86f45dc79de14e67d8ce\"}]},\"ping\":{\"ping_freshness\":\"{080485bb-adf2-4914-bbb7-50d59b6c00bc}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\","
		"\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fe73eec126375bd87958b3c586d76006f740779dfd988c04bfb52a51b9594bcc\"}]},\"ping\":{\"ping_freshness\":\"{1070689a-5d43-4adb-8e2c-f2d3941fe4bc}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"6273\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{28f0fcf8-aff9-4e0b-aa01-7b9e5d2c94c1}\",\"rd\":5083},\""
		"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.686c6e243003597668933d4b7db6d4437fd94f90bfe5f76db32bb21059c95c42\"}]},\"ping\":{\"ping_freshness\":\"{76a25390-2f07-4f2d-ab94-48443b6b4cd4}\",\"rd\":5083},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"86.249.200\"},{\"appid\":\""
		"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{d6fdc9c1-6067-4a19-9cf2-74662bfb8ff9}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\""
		",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9501aaed74ad809b346ab09aaa63a42a0002fbba42784493b30fb27425836722\"}]},\"ping\":{\"ping_freshness\":\"{e4f16b1d-c972-4c61-8ca6-0016732df15b}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"2510\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.806e9975dc58d94d3c7bc57f400aff658b9bf1c3ae3edc0998c4078b37c1f484\"}]},\"ping\":{\"ping_freshness\":\"{1cc94598-1f57-4be4-ae2f-e5c1f01e8911}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"2020.11.29.1203\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GGLS\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":"
		"\"{7502afbd-611b-45dc-be4c-7fbffd701321}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{6a4ff3b3-5ccb-42e3-8fb9-f57a81e9555c}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\""
		"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{31adcf06-1827-4869-9a31-2a2a1a227a98}\",\"rd\":5083},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":8},\"lang\":\"en-US\",\""
		"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19041.630\"},\"prodversion\":\"87.0.4280.66\",\"protocol\":\"3.1\",\"requestid\":\"{7be52813-a433-47ad-b0ec-f1eb6a3b58b6}\",\"sessionid\":\"{ee0baf6f-ca1e-4735-a132-715ff7d94f54}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.32\"},\"updaterversion\":\"87.0.4280.66\"}}", 
		LAST);

	web_url("plugins_win.json", 
		"URL=https://www.gstatic.com/chrome/config/plugins_3/plugins_win.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"25281BCB1F82FD2F89835099A8A4AFA580FDB1FE");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"V/TDo+YjC+0RtV7g8XksR7Kl7LTUAadf7Fq5LpD/fpQ=");

	web_add_auto_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");

	web_custom_request("v2_2", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"BodyBinary=\tq\\x80\\xAC\\xBB\\x9B\\xB5U\\xC2\\x10\\xB9\\x05\\x1A\\xF8\\x1C\\x08\\xF5\\xC7\\xCC\\xFD\\x05\\x12\\x0F87.0.4280.66-64\\x18\\xB0\\xB3\\x87\\xCE\\x05\"\\x05en-US*\\x18\n\nWindows NT\\x12\n10.0.190412\\xB1\\x01\n\\x06x86_64\\x10\\xA4?\\x18\\x80\\x80\\xFC\\x8F\\xD6\\xFF\\x1F\"\\x00(\\x010\\x80\\x148\\xB8\\x08Ba\\x08\\x86\\x81\\x02\\x10\\x96\\x14\\x1A\r20.19.15.46422\\x0BGoogle Inc.:<ANGLE (Intel(R) HD Graphics Family Direct3D11 vs_5_0 ps_5_0)M\\xA9\\xF7\\xA2BUsC\\xA4Be\\x00\\x00\\x80?"
		"j\\x16\n\\x0CGenuineIntel\\x10\\xD1\\x8C\\x10\\x18\\x04 \\x00\\x82\\x01\\x02\\x08\\x01\\x8A\\x01\\x02\\x08\\x01:5\n\\x0FShockwave Flash\\x12\\x12pepflashplayer.dll\\x1A\n32.0.0.453 \\x00(\\x01:;\n\\x11Chrome PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:+\n\rNative Client\\x12\\x14internal-nacl-plugin\\x1A\\x00 \\x00(\\x01:.\n\\x11Chrome PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x00J\n\r]s\\x81\\xAF\\x15\\x80\\x8D}\\xCAJ\n\r"
		"1V\\x08\\x84\\x15\\xCF\\xA1\\x02\\xABJ\n\r>\\x0C\\xF7\\xDF\\x15Z\\xE5{7J\n\r[\\x07\\xA7\\x90\\x15\\x97:\\x89\\xD2J\n\r\\xD3\\x11\\xF9D\\x15\\xFBZ\\xF17J\n\rT`\\xB1\\x16\\x15\\x80\\x8D}\\xCAJ\n\r\\x87Q\\xF7\\xB0\\x15\\xA2\\xE6\\xED\\x12J\n\r#\\xF6\\xF8\\x91\\x15\\x80\\x8D}\\xCAJ\n\r\\x12\\xF4\\xB6Y\\x15\\x80\\x8D}\\xCAJ\n\rR\\xB3\\xD4`\\x15\\x80\\x8D}\\xCAJ\n\r\\xFE\\x82\\xA6L\\x15\\xECq$hJ\n\r\\xCF.\\xB6\\x82\\x15\\xA2\\xE6\\xED\\x12J\n\rd\\xA1;\\x82\\x15Z\\xE5{7J\n\r)\\xB3\\\\f\\x15\\x80\\x8D}"
		"\\xCAJ\n\r>\\xC6R\\x1D\\x15\\x80\\x8D}\\xCAJ\n\r\\xBF$\\xE4\\x8A\\x15\\xA2\\xE6\\xED\\x12J\n\r{\\x85j\\x9D\\x15\\x80\\x8D}\\xCAJ\n\r4\\xC3\\xEEa\\x15\\x80\\x8D}\\xCAJ\n\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n\r1\\xEC\\x7F\\xC2\\x15\\x0F\\xE0f\\xD6J\n\r\\x06\\xC9\\x1B|\\x15N\\xB7%XJ\n\r\\x95\\xABP\\x89\\x15\\x80\\x8D}\\xCAJ\n\r\\xA9\\x8E\\xB5\\xED\\x15\\x80\\x8D}\\xCAJ\n\r\\xCF\\xFE\\x98\\x12\\x15\\x80\\x8D}\\xCAJ\n\r\\xDD\\xDD\\x13\\x9A\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\x08J`\\x9E\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xB5j}\\xD9\\x15\\x80\\x8D}\\xCAJ\n\r\\xCDU\\x04\\xFA\\x15\\x80\\x8D}\\xCAJ\n\rR\\xB0Az\\x15\\x80\\x8D}\\xCAJ\n\r|~;\\x81\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xED-t\\xDC\\x15!\\x98\\xA4\\x1FJ\n\r\\xFB\\xBF\\xAE\\xC3\\x15\\x80\\x8D}\\xCAJ\n\r3\\xB8p\\x84\\x15\\x80\\x8D}\\xCAJ\n\r\\xCE\\x88R\\x19\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x03\\\\\\xA3E\\x15\\x80\\x8D}\\xCAJ\n\r\\x1A\\x14r\\xC5\\x15\\x80\\x8D}\\xCAJ\n\r\\xF7\\xE5\\xE3\\xED\\x15Z\\xE5{7J\n\r\\x1D\\xC8"
		"<\\x85\\x15\\x80\\x8D}\\xCAJ\n\r\\xC0\\x04Zj\\x15\\x80\\x8D}\\xCAJ\n\r\\x06\\x08We\\x15\\x11\\xD7eoJ\n\r\\x97\\x82\\x9C\\x9F\\x15\\x80\\x8D}\\xCAJ\n\r\nGZ4\\x15\\xDC\\xEE\\xFD\\xFAJ\n\r\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n\r\\x1D|'m\\x15U'\\xAB\\x90J\n\r\\xE4\\x03\\x10\\xEB\\x15cJ\\xB3IJ\n\r.'\\xF0\\x89\\x15Z\\xE5{7J\n\r\\xC0\\x04p$\\x15\\x80\\x8D}\\xCAJ\n\r\\\\)\\x1CR\\x15\\x80\\x8D}\\xCAJ\n\r\\xBE\\xE0\\xC2x\\x15\\x80\\x8D}\\xCAJ\n\rK\\xADB0\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xE9W\\xA3\\xE4\\x15\\x80\\x8D}\\xCAJ\n\r\\xD3\\x0Euh\\x15Z\\xE5{7J\n\r\\xCD\\xE4)\\xC1\\x15Z\\xE5{7J\n\r\\xA7\\x13\\x0C\\x86\\x15\\x80\\x8D}\\xCAJ\n\r\\xEB\\x04A\\xD2\\x15\\x80\\x8D}\\xCAJ\n\r\\xCA\\x84gg\\x15\\xA2\\xE6\\xED\\x12J\n\r(\\xB6)'\\x15o\\xC1\\xB5KJ\n\r!'\\xB8\\xC4\\x15\\xB1'\\x89\\xC7J\n\r\\x1A\\xE6!\\xDC\\x15Z\\xE5{7J\n\rq,%\\x05\\x15\\x80\\x8D}\\xCAJ\n\r8>\\xA5\\x05\\x15\\x80\\x8D}\\xCAJ\n\r\\xED\\\\\\x19X\\x15\\x80\\x8D}\\xCAJ\n\ro\\x1B\\xA8.\\x15\\x80\\x8D}\\xCAJ\n\r"
		"6\\xF6\\xB8\\xE4\\x15\\x80\\x8D}\\xCAJ\n\rm#:^\\x15\\xD0\\x86\\xE2YJ\n\rM\\xC7\\xB3\\xFA\\x15\\x80\\x8D}\\xCAJ\n\rJjE\\xF6\\x15\\x80\\x8D}\\xCAJ\n\r\\xD7X.\\x14\\x15\\x80\\x8D}\\xCAJ\n\rX\\xA5\\xED\\x1B\\x15Z\\xE5{7J\n\r\\xFC\\x865\\xA2\\x15\\x80\\x8D}\\xCAJ\n\r\\xD6\\xA0\\xC0R\\x15\\xEC\\x9Ew\\xB4J\n\r\\xF1u\\\\\\x9E\\x15S\\xAA7\\x19J\n\r<d\\x03\\xF4\\x15\\xAA\\xB4!#J\n\r\\x82$i\\xD8\\x15\\x80\\x8D}\\xCAJ\n\r\\x85\\x86/ \\x15\\xEC\\x9Ew\\xB4J\n\r\\xAE8\\x8Ec\\x15\\x90\\xC5\\xB2\\xDFJ\n\r\\xE4\r"
		"\\x9D@\\x15\\x80\\x8D}\\xCAJ\n\r\\xA1\\xC4\\xBC\\xBD\\x15\\x82Z\\x03DJ\n\r\\xACO\\xD7\\xDA\\x15\\x80\\x8D}\\xCAJ\n\r\\xCB\\xF4S\\xE1\\x15\\x80\\x8D}\\xCAJ\n\r\\xE4\\x0B\\x99/\\x15\\x80\\x8D}\\xCAJ\n\rZ\\x9A\\xC9S\\x15\\x80\\x8D}\\xCAJ\n\r\\xBDoV\\xD3\\x15\\x80\\x8D}\\xCAJ\n\r\\x93\\xBB\\x12\\xCE\\x15Z\\xE5{7J\n\rjX\\x85\\xAE\\x15\\x80\\x8D}\\xCAJ\n\r\\xA6\\x03\\xA3N\\x15\\x0E%\\xBB\\xECJ\n\r|w\\xECA\\x15\\xA2\\xE6\\xED\\x12J\n\r:\\x05\\xC6\\x99\\x15Z\\xE5{7J\n\r6\\xEE\\x8A\\xF4\\x15\\x80\\x8D}"
		"\\xCAJ\n\r\\xA5m\\xA4z\\x15P\\xB1F\\xC9J\n\r@\\x14\\xE5,\\x15\\x80\\x8D}\\xCAJ\n\rl\\x07\\xF4\\xD6\\x15\\x80\\x8D}\\xCAJ\n\rm(\\xFFP\\x15Z\\xE5{7J\n\r\\xC0\\x8E\\xFFO\\x15\\xBD\\xE7\\x19TJ\n\rq\\x95]l\\x15Z\\xE5{7J\n\r\\xEC]\\xBE)\\x15-\\xCB\\xA2\\xABJ\n\r\\x08q\\x16\\xF1\\x15Z\\xE5{7J\n\rc\\xC9\\xA3\\xD8\\x15\\x80\\x8D}\\xCAJ\n\rt8\\x06x\\x15\\x80\\x8D}\\xCAJ\n\r\\xD7dG\\xEF\\x154\\x91\\xD9-J\n\r\\xFD\\x87V\\xA0\\x15\\xCD_\\xE0mJ\n\r\\xBEp\\xFF\\xD0\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xB2\\xB5`w\\x15\\x80\\x8D}\\xCAJ\n\rG\\xAE\\xBA9\\x15\\x80\\x8D}\\xCAJ\n\r\\x85\\xDAT\\x13\\x15\\xA7\\x94\\x12xJ\n\rr_\\x1C\\x93\\x15yF\\x0F\\x1BJ\n\r>\\xB5\\xF5\\x97\\x15\\x80\\x8D}\\xCAJ\n\r`\\x87MI\\x15C]2RJ\n\r*\\xE8z\\xF4\\x15\\xE5.\\xF2\\x86J\n\rU\\x08\\xC6:\\x15\\x9C*nHJ\n\r\\xA3\\xB6\\xDCc\\x15\\xD0\\xE0\\x90\\xDAJ\n\rF\\xE7\\x06\\xE7\\x15' \\x83\\xACJ\n\r\\x0C\\x19\\x96\\xF2\\x15P\\xE3\\x9A:J\n\r\\xE2\\xAABD\\x15c(\\x82\\xA5J\n\rd\\xCF\\x90\\xF6\\x15\\xE7\\xFF\\xDFkJ\n\r"
		"w\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xA0\\xF0\\xF0u\\x15u\\x05\\xD6JJ\n\r\\x81\\x84\\xB1\\xE2\\x15u\\x05\\xD6JJ\n\r\\x89\\x18\\xE7\\xE7\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xF9uL\\xAE\\x15Z\\xE5{7J\n\r\\x0Bh\\xF9\r\\x15\\x80\\x8D}\\xCAJ\n\r\\x9F\\xCA\\xC4\\xFF\\x15\\xA5Xc\\x13J\n\rzZ?\\x7F\\x15\\x03\\xF5\\xFEeJ\n\r\\xB5\\xF5uy\\x15\\x80\\x8D}\\xCAJ\n\r\\x96\\x846\\xE1\\x15\\x80\\x8D}\\xCAJ\n\r\\x03_C'\\x15\\x80\\x8D}\\xCAJ\n\r:\\x7F\\xFA\\xA5\\x15\\x80\\x8D}\\xCAJ\n\r-\\xC6\\xA8+"
		"\\x15\\x80\\x8D}\\xCAJ\n\r\\xE4\\xD7q\\xBF\\x15Z\\xE5{7J\n\r\\x03\\x87\\x94\\xAF\\x15\\xBAGj{J\n\r\\x17\\xCCo\\xCF\\x15yF\\x0F\\x1BJ\n\r\\x9A,J*\\x15\\xBB\\x06\\x18\\xF6J\n\r/\\xE4\\xB2\\x8D\\x15\\x80\\x8D}\\xCAJ\n\r5\\xEA\\x81|\\x15\\xF6\\xB8\\xE7\\xA5J\n\r\n\\xB6qo\\x15\\x94#\\xEE\\xF4J\n\r\\xF9>?\\xB5\\x15\\x80\\x8D}\\xCAJ\n\r\\x88~\\x98\\xA4\\x15\\x037\\xA4\\xF9J\n\r1\\x90U\\x0C\\x15\\xF4\\xF4G=J\n\r\\xE3\\xBA8\\x9A\\x15\\xDF\\x17J?J\n\r\\xE1\\x04\\xADA\\x15@_\\x06\\xE4J\n\r"
		"\\x14\\xAA\\\\\\x16\\x15\\xF4\\xF4G=J\n\r}\\x96\\x9D\\xD6\\x15.\\xC9\\x956P\\x04ZE\\x08\\x01\\x10\\xEE\\x91\\x96\\xFE\\x05\\x18\\xB1\\x92\\x96\\xFE\\x05\"\\x17\n\t1.3.36.32\\x10\\xB1\\x92\\x96\\xFE\\x05\\x18\\x00 \\x00(\\x00*\\x1C\n\\x0C87.0.4280.66\\x10\\xB1\\x92\\x96\\xFE\\x05\\x18\\x00 \\x1E(\\x80\\x80\\x08b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x02\\x18\\x00 \\x058\\x06@\\x06\\x80\\x01\\xB0\\xB3\\x87\\xCE\\x05\\x90\\x01\\x02\\x90\\x01\n"
		"\\x90\\x01U\\x90\\x01x\\x90\\x01\\x8F\\x01\\x90\\x01\\x9B\\x01\\x90\\x01\\xA1\\x01\\x90\\x01\\xA6\\x01\\x90\\x01\\xDB\\x01\\x90\\x01\\xE5\\x01\\x90\\x01\\xAD\\x02\\x90\\x01\\xC4\\x02\\x90\\x01\\x89\\x03\\x90\\x01\\x91\\x03\\x90\\x01\\x9A\\x03\\x90\\x01\\x9C\\x03\\x90\\x01\\xC2\\x03\\x90\\x01\\xD1\\x03\\x90\\x01\\x92\\x04\\x90\\x01\\x95\\x04\\x90\\x01\\xAF\\x04\\x90\\x01\\xB2\\x04\\x90\\x01\\xC5\\x04\\x90\\x01\\xCE\\x04\\x90\\x01\\xD8\\x04\\x90\\x01\\xF0\\x05\\x90\\x01\\xB4\\x06\\x90\\x01\\xC0\\x06"
		"\\x90\\x01\\x9B\\x07\\x90\\x01\\xE2\\x07\\x90\\x01\\xF8\\x07\\x98\\x01\\x01\\xB0\\x01\\x01\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.18.0\\x1D\\xCEAz<\\xC2\\x01\n\\x08\\x08\\x12\\x017\\x1Dlm\\xB1>\\xC2\\x01\\x13\\x08\\x0C\\x12\n86.249.200\\x1D$nlh\\xC2\\x01\r\\x08\n\\x12\\x046273\\x1D\\xC1\\xEEs\\xFE\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D \\xDC\\xD7\\x1C\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0243\\x1D\\xD7\\xD2\\xD1\\xFF\\xC2\\x01\\x10\\x08\\x03\\x12\\x071.0.0.5\\x1D;"
		"\\xA9\\xFCb\\xC2\\x01\\x13\\x08\\x04\\x12\n32.0.0.453\\x1D\\xE3\\x04\\xEA\\xD5\\xC2\\x01\\x14\\x08\r\\x12\\x0B4.10.1679.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\n\\x08\\x1B\\x12\\x011\\x1D\\x15\\xA9\\x8AG\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 "
		"\\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x02\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x06\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\nx\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x06\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xE2\\x01\\x1620201130-090604.282329\\xF8\\x01\\xC17\\x80\\x02\\xFD=\\x88\\x02\\x01\\x92\\x02$7df55d2a-4b2d-4625-97bf-2c1a68ba83812\\x0F\t\\x17\\xF9\\xCB\\xEA\\x16s\\xCD\\x8C\\x10d\\x1A\\x02\\x10e", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABEmVhc3lsaXN0LWRvd25sb2FkcwthZGJsb2NrcGx1cwNvcmcAAAEAAQAAKRAAAAAAAABBAAwAPQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABDG5vdGlmaWNhdGlvbgthZGJsb2NrcGx1cwNvcmcAAAEAAQAAKRAAAAAAAABHAAwAQwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	/* Signin with GitHUb */

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"lkUBKXyZCFeIPOkOV9HLpYBHisua4atAuD6yO/xb774=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"2C8E8C03CF9F1B79551A758C8FA2D3C6DE55E4FC");

	web_custom_request("v2_3", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		body_variable_1, 
		LAST);

	web_revert_auto_header("X-Chrome-UMA-ReportingInfo");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"87\", \"\\\"Not;A\\\\Brand\";v=\"99\", \"Chromium\";v=\"87\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(15);

	web_url("notification.json", 
		"URL=https://notification.adblockplus.org/notification.json?addonName=adblockpluschrome&addonVersion=3.10&application=chrome&applicationVersion=87.0.4280.66&platform=chromium&platformVersion=87.0.4280.66&lastVersion=202012010538&downloadCount=4%2B&firstVersion=2019-E", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://easylist-downloads.adblockplus.org/easylist.txt?addonName=adblockpluschrome&addonVersion=3.10&application=chrome&applicationVersion=87.0.4280.66&platform=chromium&platformVersion=87.0.4280.66&lastVersion=202012010530&downloadCount=4%2B&firstVersion=2019-E", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"event\":[{\"download_time_ms\":20563,\"downloaded\":7252,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2020.12.2.2\",\"previousversion\":\"2020.12.2.1\",\"total\":7252,\"url\":\"http://redirector.gvt1.com/edgedl/release2/chrome_component/bS0-vXffPFwb3x6LTjCIsg_2020.12.2.2/AIAQShRFn1WmtHsdx4FO3pU\"},{\"eventresult\":1,\""
		"eventtype\":3,\"nextfp\":\"1.e42caa501d823679a9db8d307b1e3680d7f769fe16294b01f9ee91556cc951f0\",\"nextversion\":\"2020.12.2.2\",\"previousfp\":\"1.a5267dbf664b6b4a35841b147e1c4864ba1466c5de1505ce7793f63ae46fca12\",\"previousversion\":\"2020.12.2.1\"}],\"version\":\"2020.12.2.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":8},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19041.630\"},\"prodversion\":\"87.0.4280.66"
		"\",\"protocol\":\"3.1\",\"requestid\":\"{91e69416-6403-4e22-ba92-6fa73af979c9}\",\"sessionid\":\"{ee0baf6f-ca1e-4735-a132-715ff7d94f54}\",\"updaterversion\":\"87.0.4280.66\"}}", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBmdpdGh1YgNjb20AAAEAAQAAKRAAAAAAAABZAAwAVQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"pinZgwQU0JTE2Q13kXnhVuYmJCImfbcLcSTvrD3Fu2E=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"50723D9A1DC191BEB5CC0205BD94D9516E8E9F69");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");

	lr_think_time(5);

	web_custom_request("v2_4", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"BodyBinary=\tq\\x80\\xAC\\xBB\\x9B\\xB5U\\xC2\\x10\\xBB\\x05\\x1A\\xFB\\x1C\\x08\\xF5\\xC7\\xCC\\xFD\\x05\\x12\\x0F87.0.4280.66-64\\x18\\xB0\\xB3\\x87\\xCE\\x05\"\\x05en-US*\\x18\n\nWindows NT\\x12\n10.0.190412\\xB1\\x01\n\\x06x86_64\\x10\\xA4?\\x18\\x80\\x80\\xFC\\x8F\\xD6\\xFF\\x1F\"\\x00(\\x010\\x80\\x148\\xB8\\x08Ba\\x08\\x86\\x81\\x02\\x10\\x96\\x14\\x1A\r20.19.15.46422\\x0BGoogle Inc.:<ANGLE (Intel(R) HD Graphics Family Direct3D11 vs_5_0 ps_5_0)M\\xA9\\xF7\\xA2BUsC\\xA4Be\\x00\\x00\\x80?"
		"j\\x16\n\\x0CGenuineIntel\\x10\\xD1\\x8C\\x10\\x18\\x04 \\x00\\x82\\x01\\x02\\x08\\x01\\x8A\\x01\\x02\\x08\\x01:5\n\\x0FShockwave Flash\\x12\\x12pepflashplayer.dll\\x1A\n32.0.0.453 \\x00(\\x01:;\n\\x11Chrome PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:+\n\rNative Client\\x12\\x14internal-nacl-plugin\\x1A\\x00 \\x00(\\x01:.\n\\x11Chrome PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x03\\xE8\\x01\\x01J\n\r]s\\x81\\xAF\\x15\\x80\\x8D}\\xCAJ\n\r"
		"1V\\x08\\x84\\x15\\xCF\\xA1\\x02\\xABJ\n\r>\\x0C\\xF7\\xDF\\x15Z\\xE5{7J\n\r[\\x07\\xA7\\x90\\x15\\x97:\\x89\\xD2J\n\r\\xD3\\x11\\xF9D\\x15\\xFBZ\\xF17J\n\rT`\\xB1\\x16\\x15\\x80\\x8D}\\xCAJ\n\r\\x87Q\\xF7\\xB0\\x15\\xA2\\xE6\\xED\\x12J\n\r#\\xF6\\xF8\\x91\\x15\\x80\\x8D}\\xCAJ\n\r\\x12\\xF4\\xB6Y\\x15\\x80\\x8D}\\xCAJ\n\rR\\xB3\\xD4`\\x15\\x80\\x8D}\\xCAJ\n\r\\xFE\\x82\\xA6L\\x15\\xECq$hJ\n\r\\xCF.\\xB6\\x82\\x15\\xA2\\xE6\\xED\\x12J\n\rd\\xA1;\\x82\\x15Z\\xE5{7J\n\r)\\xB3\\\\f\\x15\\x80\\x8D}"
		"\\xCAJ\n\r>\\xC6R\\x1D\\x15\\x80\\x8D}\\xCAJ\n\r\\xBF$\\xE4\\x8A\\x15\\xA2\\xE6\\xED\\x12J\n\r{\\x85j\\x9D\\x15\\x80\\x8D}\\xCAJ\n\r4\\xC3\\xEEa\\x15\\x80\\x8D}\\xCAJ\n\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n\r1\\xEC\\x7F\\xC2\\x15\\x0F\\xE0f\\xD6J\n\r\\x06\\xC9\\x1B|\\x15N\\xB7%XJ\n\r\\x95\\xABP\\x89\\x15\\x80\\x8D}\\xCAJ\n\r\\xA9\\x8E\\xB5\\xED\\x15\\x80\\x8D}\\xCAJ\n\r\\xCF\\xFE\\x98\\x12\\x15\\x80\\x8D}\\xCAJ\n\r\\xDD\\xDD\\x13\\x9A\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\x08J`\\x9E\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xB5j}\\xD9\\x15\\x80\\x8D}\\xCAJ\n\r\\xCDU\\x04\\xFA\\x15\\x80\\x8D}\\xCAJ\n\rR\\xB0Az\\x15\\x80\\x8D}\\xCAJ\n\r|~;\\x81\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xED-t\\xDC\\x15!\\x98\\xA4\\x1FJ\n\r\\xFB\\xBF\\xAE\\xC3\\x15\\x80\\x8D}\\xCAJ\n\r3\\xB8p\\x84\\x15\\x80\\x8D}\\xCAJ\n\r\\xCE\\x88R\\x19\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x03\\\\\\xA3E\\x15\\x80\\x8D}\\xCAJ\n\r\\x1A\\x14r\\xC5\\x15\\x80\\x8D}\\xCAJ\n\r\\xF7\\xE5\\xE3\\xED\\x15Z\\xE5{7J\n\r\\x1D\\xC8"
		"<\\x85\\x15\\x80\\x8D}\\xCAJ\n\r\\xC0\\x04Zj\\x15\\x80\\x8D}\\xCAJ\n\r\\x06\\x08We\\x15\\x11\\xD7eoJ\n\r\\x97\\x82\\x9C\\x9F\\x15\\x80\\x8D}\\xCAJ\n\r\nGZ4\\x15\\xDC\\xEE\\xFD\\xFAJ\n\r\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n\r\\x1D|'m\\x15U'\\xAB\\x90J\n\r\\xE4\\x03\\x10\\xEB\\x15cJ\\xB3IJ\n\r.'\\xF0\\x89\\x15Z\\xE5{7J\n\r\\xC0\\x04p$\\x15\\x80\\x8D}\\xCAJ\n\r\\\\)\\x1CR\\x15\\x80\\x8D}\\xCAJ\n\r\\xBE\\xE0\\xC2x\\x15\\x80\\x8D}\\xCAJ\n\rK\\xADB0\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xE9W\\xA3\\xE4\\x15\\x80\\x8D}\\xCAJ\n\r\\xD3\\x0Euh\\x15Z\\xE5{7J\n\r\\xCD\\xE4)\\xC1\\x15Z\\xE5{7J\n\r\\xA7\\x13\\x0C\\x86\\x15\\x80\\x8D}\\xCAJ\n\r\\xEB\\x04A\\xD2\\x15\\x80\\x8D}\\xCAJ\n\r\\xCA\\x84gg\\x15\\xA2\\xE6\\xED\\x12J\n\r(\\xB6)'\\x15o\\xC1\\xB5KJ\n\r!'\\xB8\\xC4\\x15\\xB1'\\x89\\xC7J\n\r\\x1A\\xE6!\\xDC\\x15Z\\xE5{7J\n\rq,%\\x05\\x15\\x80\\x8D}\\xCAJ\n\r8>\\xA5\\x05\\x15\\x80\\x8D}\\xCAJ\n\r\\xED\\\\\\x19X\\x15\\x80\\x8D}\\xCAJ\n\ro\\x1B\\xA8.\\x15\\x80\\x8D}\\xCAJ\n\r"
		"6\\xF6\\xB8\\xE4\\x15\\x80\\x8D}\\xCAJ\n\rm#:^\\x15\\xD0\\x86\\xE2YJ\n\rM\\xC7\\xB3\\xFA\\x15\\x80\\x8D}\\xCAJ\n\rJjE\\xF6\\x15\\x80\\x8D}\\xCAJ\n\r\\xD7X.\\x14\\x15\\x80\\x8D}\\xCAJ\n\rX\\xA5\\xED\\x1B\\x15Z\\xE5{7J\n\r\\xFC\\x865\\xA2\\x15\\x80\\x8D}\\xCAJ\n\r\\xD6\\xA0\\xC0R\\x15\\xEC\\x9Ew\\xB4J\n\r\\xF1u\\\\\\x9E\\x15S\\xAA7\\x19J\n\r<d\\x03\\xF4\\x15\\xAA\\xB4!#J\n\r\\x82$i\\xD8\\x15\\x80\\x8D}\\xCAJ\n\r\\x85\\x86/ \\x15\\xEC\\x9Ew\\xB4J\n\r\\xAE8\\x8Ec\\x15\\x90\\xC5\\xB2\\xDFJ\n\r\\xE4\r"
		"\\x9D@\\x15\\x80\\x8D}\\xCAJ\n\r\\xA1\\xC4\\xBC\\xBD\\x15\\x82Z\\x03DJ\n\r\\xACO\\xD7\\xDA\\x15\\x80\\x8D}\\xCAJ\n\r\\xCB\\xF4S\\xE1\\x15\\x80\\x8D}\\xCAJ\n\r\\xE4\\x0B\\x99/\\x15\\x80\\x8D}\\xCAJ\n\rZ\\x9A\\xC9S\\x15\\x80\\x8D}\\xCAJ\n\r\\xBDoV\\xD3\\x15\\x80\\x8D}\\xCAJ\n\r\\x93\\xBB\\x12\\xCE\\x15Z\\xE5{7J\n\rjX\\x85\\xAE\\x15\\x80\\x8D}\\xCAJ\n\r\\xA6\\x03\\xA3N\\x15\\x0E%\\xBB\\xECJ\n\r|w\\xECA\\x15\\xA2\\xE6\\xED\\x12J\n\r:\\x05\\xC6\\x99\\x15Z\\xE5{7J\n\r6\\xEE\\x8A\\xF4\\x15\\x80\\x8D}"
		"\\xCAJ\n\r\\xA5m\\xA4z\\x15P\\xB1F\\xC9J\n\r@\\x14\\xE5,\\x15\\x80\\x8D}\\xCAJ\n\rl\\x07\\xF4\\xD6\\x15\\x80\\x8D}\\xCAJ\n\rm(\\xFFP\\x15Z\\xE5{7J\n\r\\xC0\\x8E\\xFFO\\x15\\xBD\\xE7\\x19TJ\n\rq\\x95]l\\x15Z\\xE5{7J\n\r\\xEC]\\xBE)\\x15-\\xCB\\xA2\\xABJ\n\r\\x08q\\x16\\xF1\\x15Z\\xE5{7J\n\rc\\xC9\\xA3\\xD8\\x15\\x80\\x8D}\\xCAJ\n\rt8\\x06x\\x15\\x80\\x8D}\\xCAJ\n\r\\xD7dG\\xEF\\x154\\x91\\xD9-J\n\r\\xFD\\x87V\\xA0\\x15\\xCD_\\xE0mJ\n\r\\xBEp\\xFF\\xD0\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xB2\\xB5`w\\x15\\x80\\x8D}\\xCAJ\n\rG\\xAE\\xBA9\\x15\\x80\\x8D}\\xCAJ\n\r\\x85\\xDAT\\x13\\x15\\xA7\\x94\\x12xJ\n\rr_\\x1C\\x93\\x15yF\\x0F\\x1BJ\n\r>\\xB5\\xF5\\x97\\x15\\x80\\x8D}\\xCAJ\n\r`\\x87MI\\x15C]2RJ\n\r*\\xE8z\\xF4\\x15\\xE5.\\xF2\\x86J\n\rU\\x08\\xC6:\\x15\\x9C*nHJ\n\r\\xA3\\xB6\\xDCc\\x15\\xD0\\xE0\\x90\\xDAJ\n\rF\\xE7\\x06\\xE7\\x15' \\x83\\xACJ\n\r\\x0C\\x19\\x96\\xF2\\x15P\\xE3\\x9A:J\n\r\\xE2\\xAABD\\x15c(\\x82\\xA5J\n\rd\\xCF\\x90\\xF6\\x15\\xE7\\xFF\\xDFkJ\n\r"
		"w\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xA0\\xF0\\xF0u\\x15u\\x05\\xD6JJ\n\r\\x81\\x84\\xB1\\xE2\\x15u\\x05\\xD6JJ\n\r\\x89\\x18\\xE7\\xE7\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xF9uL\\xAE\\x15Z\\xE5{7J\n\r\\x0Bh\\xF9\r\\x15\\x80\\x8D}\\xCAJ\n\r\\x9F\\xCA\\xC4\\xFF\\x15\\xA5Xc\\x13J\n\rzZ?\\x7F\\x15\\x03\\xF5\\xFEeJ\n\r\\xB5\\xF5uy\\x15\\x80\\x8D}\\xCAJ\n\r\\x96\\x846\\xE1\\x15\\x80\\x8D}\\xCAJ\n\r\\x03_C'\\x15\\x80\\x8D}\\xCAJ\n\r:\\x7F\\xFA\\xA5\\x15\\x80\\x8D}\\xCAJ\n\r-\\xC6\\xA8+"
		"\\x15\\x80\\x8D}\\xCAJ\n\r\\xE4\\xD7q\\xBF\\x15Z\\xE5{7J\n\r\\x03\\x87\\x94\\xAF\\x15\\xBAGj{J\n\r\\x17\\xCCo\\xCF\\x15yF\\x0F\\x1BJ\n\r\\x9A,J*\\x15\\xBB\\x06\\x18\\xF6J\n\r/\\xE4\\xB2\\x8D\\x15\\x80\\x8D}\\xCAJ\n\r5\\xEA\\x81|\\x15\\xF6\\xB8\\xE7\\xA5J\n\r\n\\xB6qo\\x15\\x94#\\xEE\\xF4J\n\r\\xF9>?\\xB5\\x15\\x80\\x8D}\\xCAJ\n\r\\x88~\\x98\\xA4\\x15\\x037\\xA4\\xF9J\n\r1\\x90U\\x0C\\x15\\xF4\\xF4G=J\n\r\\xE3\\xBA8\\x9A\\x15\\xDF\\x17J?J\n\r\\xE1\\x04\\xADA\\x15@_\\x06\\xE4J\n\r"
		"\\x14\\xAA\\\\\\x16\\x15\\xF4\\xF4G=J\n\r}\\x96\\x9D\\xD6\\x15.\\xC9\\x956P\\x04ZE\\x08\\x01\\x10\\xEE\\x91\\x96\\xFE\\x05\\x18\\xB1\\x92\\x96\\xFE\\x05\"\\x17\n\t1.3.36.32\\x10\\xB1\\x92\\x96\\xFE\\x05\\x18\\x00 \\x00(\\x00*\\x1C\n\\x0C87.0.4280.66\\x10\\xB1\\x92\\x96\\xFE\\x05\\x18\\x00 \\x1E(\\x80\\x80\\x08b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x02\\x18\\x00 \\x058\\x06@\\x06\\x80\\x01\\xB0\\xB3\\x87\\xCE\\x05\\x90\\x01\\x02\\x90\\x01\n"
		"\\x90\\x01U\\x90\\x01x\\x90\\x01\\x8F\\x01\\x90\\x01\\x9B\\x01\\x90\\x01\\xA1\\x01\\x90\\x01\\xA6\\x01\\x90\\x01\\xDB\\x01\\x90\\x01\\xE5\\x01\\x90\\x01\\xAD\\x02\\x90\\x01\\xC4\\x02\\x90\\x01\\x89\\x03\\x90\\x01\\x91\\x03\\x90\\x01\\x9A\\x03\\x90\\x01\\x9C\\x03\\x90\\x01\\xC2\\x03\\x90\\x01\\xD1\\x03\\x90\\x01\\x92\\x04\\x90\\x01\\x95\\x04\\x90\\x01\\xAF\\x04\\x90\\x01\\xB2\\x04\\x90\\x01\\xC5\\x04\\x90\\x01\\xCE\\x04\\x90\\x01\\xD8\\x04\\x90\\x01\\xF0\\x05\\x90\\x01\\xB4\\x06\\x90\\x01\\xC0\\x06"
		"\\x90\\x01\\x9B\\x07\\x90\\x01\\xE2\\x07\\x90\\x01\\xF8\\x07\\x98\\x01\\x01\\xB0\\x01\\x01\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.18.0\\x1D\\xCEAz<\\xC2\\x01\n\\x08\\x08\\x12\\x017\\x1Dlm\\xB1>\\xC2\\x01\\x13\\x08\\x0C\\x12\n86.249.200\\x1D$nlh\\xC2\\x01\r\\x08\n\\x12\\x046273\\x1D\\xC1\\xEEs\\xFE\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D \\xDC\\xD7\\x1C\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0243\\x1D\\xD7\\xD2\\xD1\\xFF\\xC2\\x01\\x10\\x08\\x03\\x12\\x071.0.0.5\\x1D;"
		"\\xA9\\xFCb\\xC2\\x01\\x13\\x08\\x04\\x12\n32.0.0.453\\x1D\\xE3\\x04\\xEA\\xD5\\xC2\\x01\\x14\\x08\r\\x12\\x0B4.10.1679.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\n\\x08\\x1B\\x12\\x011\\x1D\\x15\\xA9\\x8AG\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 "
		"\\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x02\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x06\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\nx\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x06\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xE2\\x01\\x1620201130-090604.282329\\xF8\\x01\\xC17\\x80\\x02\\xFD=\\x88\\x02\\x01\\x92\\x02$7df55d2a-4b2d-4625-97bf-2c1a68ba83812\\x11\t\\x14x\\xD0\n\\xD8\\x8D\\xF1)\\x10N\\x1A\\x04\\x10\\x02 N2\r\tYr8\\x94d_<\\xE1\\x1A\\x02\\x10\\x012\\x14\t\\xAEy&D\\x87\\x02\\x8BI\\x10\\xD7\"\\x1A\\x06\\x08\\xFE \\x10\\x99'2\\x14\t\\xA2\\xB6:t\\xCB\\x91n\\x8C\\x100\\x1A\\x07\\x08\\x00\\x10\\xE8\\x07 \\x042\\x13\t\\x8B\\x8B\\x85!\\xB8/"
		"\\x89/\\x10\\xA3\\x11\\x1A\\x05\\x10\\x02 \\xA3\\x112\\x0F\tY\\x9F\\x8B\\xFBDR\\x91\\x9E\\x1A\\x04\\x10\\x01 \\x082\\x11\t\t\\x1FF\\x12\\xB3\\xFF\\x13h\\x10\\x02\\x1A\\x04\\x10\\x02 \\x022\\x17\t).\\x12\\x1Ds\\xB7\\xD1t\\x10\\xE6\\xD6\\x05\\x1A\\x08\\x08\\xD3\\x9E\\x04\\x10\\x9A\\xDF\\x052\\x14\t-\\x94\\xD5\\xDF\\x16\\xFD-\\xD6\\x10\\xD2@\\x1A\\x06\\x08\\xE64\\x10\\x8BB2\r\t\\xCD\\xC8{\\x1D\\x80\\x12\\x11u\\x1A\\x02\\x10\\x012\\x0F\tsh,\\xF9Rw\\x98e\\x101\\x1A\\x02\\x1022\\x1D\t\\xEA]"
		"F\\x1C\\xCB\\xF2\\xE6\\xD3\\x10\\x83\\x03\\x1A\\x04\\x08\\x00 e\\x1A\\x02\\x08\\x01\\x1A\\x05\\x10\\x03 \\xC1\\x012\\x1E\tr\\x10\\xD4\\xC78\\x9D\\xE1\\xCE\\x10\\x11\\x1A\\x05\\x10\\x01 \\xF4\\x02\\x1A\\x04\\x08\\x03 \\x03\\x1A\\x04\\x10\\x05 \\x0227\t\\xE8\\xEDE\\xCA\\x16\\x97\\x95#\\x10U\\x1A\\x06\\x08\\x00 \\x85\\x91\\x03\\x1A\\x04\\x10\\x02 \\x06\\x1A\\x02\\x10\\x04\\x1A\\x02\\x08\\x08\\x1A\\x04\\x08\n\\x10\\x0C\\x1A\\x02\\x08\\x0E\\x1A\\x04\\x08\\x11\\x10\\x14\\x1A\\x04\\x08\\x18\\x10\\x1D2)\t"
		"\\x08\\xDD\\x87\\x07\\x8Ei*\\x1D\\x10,\\x1A\\x06\\x08\\x00 \\x8C\\x91\\x03\\x1A\\x04\\x10\\x02 \\x02\\x1A\\x02\\x10\\x07\\x1A\\x04\\x08\\x0E\\x10\\x11\\x1A\\x04\\x08\\x14\\x10\\x182\\x10\t\\xB8}m\\x08\\xC3#\\xE1C\\x1A\\x05\\x10\\x01 \\xD5L2>\t\\xA9\\x8F\\xD6k\\xC8=^?\\x10\\xCD\\x1D\\x1A\\x06\\x08\\x08\\x10\n \\x02\\x1A\\x04\\x08\\x14 \\x02\\x1A\\x04\\x08\\x18 \\x05\\x1A\\x02\\x08\\x1D\\x1A\\x04\\x08\" \\x16\\x1A\\x04\\x08( )\\x1A\\x04\\x080 \\x10\\x1A\\x06\\x089\\x10D \\x0326\t\\xBC$\\xD1MH]\\x18"
		"<\\x10\\x90\\x0B\\x1A\\x04\\x10\\x04 \\x02\\x1A\\x04\\x08\\x0C \\x16\\x1A\\x04\\x08\\x0E 8\\x1A\\x04\\x08\\x11 \\x05\\x1A\\x06\\x08\\x14\\x10\\x18 \\x05\\x1A\\x02\\x080\\x1A\\x04\\x089\\x10D2p\t\\xE29\\x07\\xE9\t,-\\x99\\x10\\xCE\\xD3\\xB2\\x02\\x1A\\x08\\x08\\xA0\\x12\\x10\\x85\\x18 \\x04\\x1A\\x05\\x08\\xF76 \\x06\\x1A\\x05\\x08\\xACH \n\\x1A\\x05\\x08\\xA4_ \\x11\\x1A\\x05\\x08\\xBF} \\x07\\x1A\\x06\\x08\\xA4\\xA5\\x01 \\x07\\x1A\\x06\\x08\\xD8\\xD9\\x01 \n\\x1A\n"
		"\\x08\\xDB\\x9E\\x02\\x10\\xD0\\xF9\\x02 \n\\x1A\\x06\\x08\\xE2\\xDE\\x06 \\x02\\x1A\\x06\\x08\\xAA\\xF0\\x08 \\x11\\x1A\\x04\\x08\\xD1\\xD8\\x0B\\x1A\\x08\\x08\\x98\\xB3\\x0F\\x10\\x9B\\xA4\\x142\\x12\tzA\\xD0\\xC3\\xD5D\\x8E\\xAA\\x10\\xCC\\x03\\x1A\\x04\\x10\\x06 \\\\2\\x9F\\x01\t\\xD8S\\x8B\\x05J\\x00\\xC0|\\x10\\xA5\\x87\\xA0\\x06\\x1A\\x03\\x08\\xEE\r\\x1A\\x05\\x08\\xA0\\x12 \\x0B\\x1A\\x05\\x08\\x85\\x18 \\x10\\x1A\\x05\\x08\\xD5\\x1F \\x12\\x1A\\x05\\x08\\xDA) \\x14\\x1A\\x05\\x08\\xF76 "
		"\\x15\\x1A\\x05\\x08\\xACH \\x1F\\x1A\\x05\\x08\\xA4_ #\\x1A\\x05\\x08\\xBF} \"\\x1A\\x06\\x08\\xA4\\xA5\\x01 $\\x1A\\x06\\x08\\xD8\\xD9\\x01 \"\\x1A\\x06\\x08\\xDB\\x9E\\x02 !\\x1A\\x06\\x08\\xD0\\xF9\\x02 \"\\x1A\\x06\\x08\\xAE\\xF1\\x03 \\x16\\x1A\\x06\\x08\\x88\\x8F\\x05 \\x07\\x1A\\x06\\x08\\xE2\\xDE\\x06 \\x05\\x1A\\x06\\x08\\xAA\\xF0\\x08 \\x07\\x1A\\x06\\x08\\xD1\\xD8\\x0B \\x03\\x1A\n\\x08\\x98\\xB3\\x0F\\x10\\x9B\\xA4\\x14 \\x042\\x17\t"
		"G\\xF3\\xB9c\\x13\\xF81\\xC0\\x10\\x12\\x1A\\x04\\x08\\x02 \\x06\\x1A\\x04\\x10\\x04 \\x022\\x11\t{\\xE7&\\xED\\xF0q\\xCB\\xFC\\x10)\\x1A\\x04\\x08)\\x1042\r\t8\\xA150\\xC6\\x8E\\xD3\\xB6\\x1A\\x02\\x10\\x012\\x11\t4\\x86f\\xDA\\xD8\\x99~\\xBC\\x10!\\x1A\\x04\\x10\\x02 !2\r\t&\\x7F\\xA5\\xAD\\xAF\\x0C\\xCB\\xBA\\x1A\\x02\\x10\\x012\\x17\tERHNvj?\\xB0\\x10\\xFD\\xD1\\x05\\x1A\\x08\\x08\\xD3\\x9E\\x04\\x10\\x9A\\xDF\\x052*\tX\\x87r&\\x97\\x19\\xD2O\\x10:\\x1A\\x05\\x08\\x00 \\xE8\""
		"\\x1A\\x04\\x08\\x01 \\x1C\\x1A\\x04\\x08\\x02 \\x08\\x1A\\x04\\x08\\x03 \\x02\\x1A\\x04\\x10\\x05 \\x022I\t\\xD7\\xE8\\xE5\\xAE\\xF7\\x02\\x95!\\x10\\xFB\\x9A\\x05\\x1A\\x03\\x08\\xD4\\x02\\x1A\\x08\\x08\\xC0\\x03\\x10\\xCE\\x04 \\x02\\x1A\\x05\\x08\\x89\\x06 \\x02\\x1A\\x05\\x08\\xFF\\x07 \\x0B\\x1A\\x05\\x08\\xC3\n \\x04\\x1A\\x05\\x08\\xEE\r \\x0B\\x1A\\x05\\x08\\xA0\\x12 \t\\x1A\\x08\\x08\\x85\\x18\\x10\\xD5\\x1F \\x052\\x17\tB\\xF3\\xFE5\\x7F?"
		"\\xE9\\xD6\\x10\\xD1\\xFE\\x04\\x1A\\x08\\x08\\xD3\\x9E\\x04\\x10\\x9A\\xDF\\x052\r\t{\nQMHo^\\x0B\\x1A\\x02\\x10\\x012\\x14\t\\xAC\\x9Be\\xBAgs\\x19l\\x10\\xA2\\x04\\x1A\\x06\\x08\\x95\\x04\\x10\\xF9\\x042\\x0F\t\\x15T\\x8F\\xE9\\xE1\\xC4\\xECc\\x10\\x04\\x1A\\x02\\x10\\x052\\x0F\t{\\xA0\\xD0\\xFA\\xA0\\xA7Y\\xBE\\x10\\x01\\x1A\\x02\\x10\\x02", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"87\", \"\\\"Not;A\\\\Brand\";v=\"99\", \"Chromium\";v=\"87\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_url("auth", 
		"URL=http://localhost:3001/auth", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:3001/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"5D8FDC4B86BB2628C6F251F1A406394B79ACB5F7");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"WBSXbv3Cq++kiTS+jluKFVWwqMW+jyyCI6Xq1rEjLWE=");

	web_add_auto_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");

	lr_think_time(7);

	web_custom_request("v2_5", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		body_variable_2, 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAmdjA2tpcwJ2MgNzY3IOa2FzcGVyc2t5LWxhYnMDY29tAAABAAEAACkQAAAAAAAAQwAMAD8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBmdpdGh1YgxnaXRodWJhc3NldHMDY29tAAABAAEAACkQAAAAAAAATAAMAEgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Chrome-UMA-ReportingInfo");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"TC214A6DLl/rX6OB/JyMcjcrwTIEu4/+doIZWUD7aFw=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"5908F17E593337B7BD6045B40CFBB84A4DFC4A1A");

	web_custom_request("v2_6", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		body_variable_3, 
		EXTRARES, 
		"Url=https://github.githubassets.com/assets/chunk-runner-groups-13e1fec0.js", "Referer=https://github.com/", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABEGNvbnRlbnQtYXV0b2ZpbGwKZ29vZ2xlYXBpcwNjb20AAAEAAQAAKRAAAAAAAABEAAwAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABCWNvbGxlY3RvcglnaXRodWJhcHADY29tAAABAAEAACkQAAAAAAAATAAMAEgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA2FwaQZnaXRodWIDY29tAAABAAEAACkQAAAAAAAAVQAMAFEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIeCTbUe6I7-lmJEgUNKEstiRIFDc5BTHoSBQ0-NV3w?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("tz=Asia%2FCalcutta; DOMAIN=api.github.com");

	web_add_auto_header("Origin", 
		"https://github.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"87\", \"\\\"Not;A\\\\Brand\";v=\"99\", \"Chromium\";v=\"87\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("stats", 
		"URL=https://api.github.com/_private/browser/stats", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://github.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"stats\":[{\"webVitalTimings\":[{\"name\":\"https://github.com/login?client_id=29535c9f20a9c389407b&return_to=%2Flogin%2Foauth%2Fauthorize%3Fclient_id%3D29535c9f20a9c389407b\",\"fcp\":50813.77500000235}],\"timestamp\":1606881265043,\"loggedIn\":false},{\"webVitalTimings\":[{\"name\":\"https://github.com/login?client_id=29535c9f20a9c389407b&return_to=%2Flogin%2Foauth%2Fauthorize%3Fclient_id%3D29535c9f20a9c389407b\",\"ttfb\":31345.074999990175}],\"timestamp\":1606881265117,\"loggedIn\":false}"
		",{\"resourceTimings\":[{\"name\":\"https://github.githubassets.com/assets/frameworks-dab626668288a951c68b47d6ec626b3f.css\",\"entryType\":\"resource\",\"startTime\":31457.989999995334,\"duration\":12303.790000005392,\"initiatorType\":\"link\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":31457.989999995334,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\""
		"responseStart\":0,\"responseEnd\":43761.78000000073,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/site-2608aa18ebee05d0d02638d1c73ed5e4.css\",\"entryType\":\"resource\",\"startTime\":31458.814999990864,\"duration\":12324.340000006487,\"initiatorType\":\"link\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":31458.814999990864,\""
		"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":43783.15499999735,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/github-8c3ca722e6c15250825d65bfce81542e.css\",\"entryType\":\"resource\",\"startTime\":31459.369999996852,\"duration\":19007.78499999433,\"initiatorType\":\"link\",\""
		"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":31459.369999996852,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":50467.15499999118,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://gc.kis.v2.scr.kaspersky-labs.com/FD126C42-EBFA-4E12-B309-BB3FDD723AC1/"
		"main.js?attr=4c4eGrgS8OPBQ7ig4b__o8-lrKS3P7-Y7lY0RwjSiEsbahm7tG9WeM_sLItN2hR1B7PpkIec56ep43WwXFIcrulmRoI4UBIBa2P1WSmkWpkrLiP8SM0ejlv5-audI-twGDGddr7xagW4ITQWus6uazi-GqQC4vstc-ShqohQJ16d5qDmXXIpWNq7jwmuWQHwyhFkLpVoMeq0r72NjNNiSA\",\"entryType\":\"resource\",\"startTime\":31461.45499999693,\"duration\":4783.320000002277,\"initiatorType\":\"script\",\"nextHopProtocol\":\"h2\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":31461.45499999693,\"domainLookupStart\":0,\""
		"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":36244.77499999921,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/environment-f0adafbf.js\",\"entryType\":\"resource\",\"startTime\":31466.30999998888,\"duration\":12433.840000012424,\"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\""
		"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":31466.30999998888,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":43900.150000001304,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/chunk-frameworks-6b40be10.js\",\"entryType\":\"resource\",\"startTime\""
		":31467.879999996512,\"duration\":18996.704999997746,\"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":31467.879999996512,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":50464.58499999426,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":"
		"\"https://github.githubassets.com/assets/chunk-vendor-78fe54a2.js\",\"entryType\":\"resource\",\"startTime\":31468.094999989262,\"duration\":19554.329999999027,\"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":31468.094999989262,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":51022.42499998829,\""
		"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/behaviors-99c26261.js\",\"entryType\":\"resource\",\"startTime\":31468.28000000096,\"duration\":19555.47999999544,\"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":31468.28000000096,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\""
		"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":51023.7599999964,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/unsupported-a85b1284.js\",\"entryType\":\"resource\",\"startTime\":31468.45499999472,\"duration\":19552.960000000894,\"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\""
		":31468.45499999472,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":51021.41499999561,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/settings-fce00487.js\",\"entryType\":\"resource\",\"startTime\":31468.664999993052,\"duration\":19655.24500000174,\"initiatorType\":\"script\",\""
		"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":31468.664999993052,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":51123.909999994794,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/sessions-d2e5da85.js\",\"entryType\":\""
		"resource\",\"startTime\":31468.800000002375,\"duration\":19642.324999993434,\"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":31468.800000002375,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":51111.12499999581,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\""
		"workerTiming\":[]},{\"name\":\"https://github.com/identicons/app/oauth_app/1425824\",\"entryType\":\"resource\",\"startTime\":31468.97000000172,\"duration\":19722.889999990002,\"initiatorType\":\"img\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":31468.97000000172,\"domainLookupStart\":31468.97000000172,\"domainLookupEnd\":31468.97000000172,\"connectStart\":31468.97000000172,\"connectEnd\":31468.97000000172,\"secureConnectionStart\""
		":31468.97000000172,\"requestStart\":50883.38999998814,\"responseStart\":51185.66999999166,\"responseEnd\":51191.85999999172,\"transferSize\":1900,\"encodedBodySize\":222,\"decodedBodySize\":1260,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://gc.kis.v2.scr.kaspersky-labs.com/FD126C42-EBFA-4E12-B309-BB3FDD723AC1/main.js?attr="
		"4c4eGrgS8OPBQ7ig4b__o8-lrKS3P7-Y7lY0RwjSiEsbahm7tG9WeM_sLItN2hR1B7PpkIec56ep43WwXFIcrulmRoI4UBIBa2P1WSmkWpkrLiP8SM0ejlv5-audI-twGDGddr7xagW4ITQWus6uazi-GqQC4vstc-ShqohQJ16d5qDmXXIpWNq7jwmuWQHwyhFkLpVoMeq0r72NjNNiSA\",\"entryType\":\"resource\",\"startTime\":50500.25499999174,\"duration\":89.35000000928994,\"initiatorType\":\"script\",\"nextHopProtocol\":\"h2\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":50500.25499999174,\"domainLookupStart\":0,\"domainLookupEnd\":0,\""
		"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":50589.60500000103,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/chunk-runner-groups-13e1fec0.js\",\"entryType\":\"resource\",\"startTime\":51145.75499999046,\"duration\":46.54500000469852,\"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\""
		"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":51145.75499999046,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":51192.29999999516,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]}],\"timestamp\":1606881265125,\"loggedIn\":false},{\"navigationTimings\":[{\"name\":\"https://github.com/login?client_id=29535c9f20a9c389407b&"
		"return_to=%2Flogin%2Foauth%2Fauthorize%3Fclient_id%3D29535c9f20a9c389407b\",\"entryType\":\"navigation\",\"startTime\":0,\"duration\":51213.764999993145,\"initiatorType\":\"navigation\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":23635.289999991073,\"domainLookupStart\":23635.289999991073,\"domainLookupEnd\":23635.289999991073,\"connectStart\":23635.289999991073,\"connectEnd\":23635.289999991073,\"secureConnectionStart\""
		":23635.289999991073,\"requestStart\":23653.684999997495,\"responseStart\":31345.074999990175,\"responseEnd\":31364.059999992605,\"transferSize\":31184,\"encodedBodySize\":27793,\"decodedBodySize\":27793,\"serverTiming\":[],\"workerTiming\":[],\"unloadEventStart\":0,\"unloadEventEnd\":0,\"domInteractive\":50617.19999999332,\"domContentLoadedEventStart\":51157.354999988456,\"domContentLoadedEventEnd\":51157.36499999184,\"domComplete\":51210.27999999933,\"loadEventStart\":51210.31499998935,\""
		"loadEventEnd\":51213.764999993145,\"type\":\"navigate\",\"redirectCount\":0}],\"timestamp\":1606881265125,\"loggedIn\":false},{\"downloadedBundles\":[\"environment.js\",\"chunk-frameworks.js\",\"chunk-vendor.js\",\"behaviors.js\",\"chunk-runner-groups.js\",\"unsupported.js\",\"settings.js\",\"sessions.js\",\"frameworks.css\",\"site.css\",\"github.css\"],\"timestamp\":1606881265135,\"loggedIn\":false}]}", 
		EXTRARES, 
		"Url=https://collector.githubapp.com/github/page_view?dimensions[page]=https%3A%2F%2Fgithub.com%2Flogin%3Fclient_id%3D29535c9f20a9c389407b%26return_to%3D%252Flogin%252Foauth%252Fauthorize%253Fclient_id%253D29535c9f20a9c389407b&dimensions[title]=Sign%20in%20to%20GitHub%20%C2%B7%20GitHub&dimensions[referrer]=http%3A%2F%2Flocalhost%3A3001%2F&dimensions[user_agent]=Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F87.0.4280.66%20Safari%2F537.36&dimensions[screen_resolution]=2560x1080&dimensions[pixel_ratio]=0.8999999761581421&dimensions[browser_resolution]=1305x1030&dimensions[tz_seconds]=19800&dimensions[timestamp]=1606881265114&dimensions[referrer]=http%3A%2F%2Flocalhost%3A3001%2F&dimensions[request_id]=72CD%3A5B17%3A62D232%3A799370%3A5FC70FCE&dimensions[visitor_id]=545326724960161748&dimensions[region_edge]=ap-south-1&dimensions[region_render]=iad&&measures[performance_timing]="
		"1-23636-23636-51211-51158-51158-50618-31419-23636-23636-23636--51211-0---23654-31364-31345---&&&dimensions[cid]=126968772.1606881236", "Referer=https://github.com/", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA2FwaQZnaXRodWIDY29tAAABAAEAACkQAAAAAAAAVQAMAFEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	/* Enter Github Credentials */

	web_custom_request("stats_2", 
		"URL=https://api.github.com/_private/browser/stats", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://github.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"stats\":[{\"webVitalTimings\":[{\"name\":\"https://github.com/login?client_id=29535c9f20a9c389407b&return_to=%2Flogin%2Foauth%2Fauthorize%3Fclient_id%3D29535c9f20a9c389407b\",\"lcp\":50813.775}],\"timestamp\":1606881331541,\"loggedIn\":false}]}", 
		LAST);

	web_custom_request("stats_3", 
		"URL=https://api.github.com/_private/browser/stats", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://github.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"stats\":[{\"webVitalTimings\":[{\"name\":\"https://github.com/login?client_id=29535c9f20a9c389407b&return_to=%2Flogin%2Foauth%2Fauthorize%3Fclient_id%3D29535c9f20a9c389407b\",\"fid\":22.2150000045076}],\"timestamp\":1606881331602,\"loggedIn\":false}]}", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBmdpdGh1YgNjb20AAAEAAQAAKRAAAAAAAABZAAwAVQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("_octo=GH1.1.126968772.1606881236; DOMAIN=github.com");

	web_add_cookie("logged_in=yes; DOMAIN=github.com");

	web_add_cookie("dotcom_user=dhineshbabu; DOMAIN=github.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("session", 
		"Action=https://github.com/session", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://github.com/login?client_id=29535c9f20a9c389407b&return_to=%2Flogin%2Foauth%2Fauthorize%3Fclient_id%3D29535c9f20a9c389407b", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=commit", "Value=Sign in", ENDITEM, 
		"Name=authenticity_token", "Value=sGBYiXd+GRp02SBEJPZYdWME1qKx10fvEvqhFwJZ2ah8X0Eyd6tLYRKxHQSqhGDMrxcerzKa3C6khgfenq1CwQ==", ENDITEM, 
		"Name=ga_id", "Value=", ENDITEM, 
		"Name=login", "Value=dhineshbabu89@gmail.com", ENDITEM, 
		"Name=password", "Value=Git8055", ENDITEM, 
		"Name=webauthn-support", "Value=supported", ENDITEM, 
		"Name=webauthn-iuvpaa-support", "Value=unsupported", ENDITEM, 
		"Name=return_to", "Value=/login/oauth/authorize?client_id=29535c9f20a9c389407b", ENDITEM, 
		"Name=allow_signup", "Value=", ENDITEM, 
		"Name=client_id", "Value=29535c9f20a9c389407b", ENDITEM, 
		"Name=integration", "Value=", ENDITEM, 
		"Name=required_field_d526", "Value=", ENDITEM, 
		"Name=timestamp", "Value=1606881236814", ENDITEM, 
		"Name=timestamp_secret", "Value=fe332f857acfb5a3b1ce10c3864ae6bc8ff51ea01796d47d7d59bffda6cae6c7", ENDITEM, 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAmdjA2tpcwJ2MgNzY3IOa2FzcGVyc2t5LWxhYnMDY29tAAABAAEAACkQAAAAAAAAQwAMAD8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("stats_4", 
		"URL=https://api.github.com/_private/browser/stats", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://github.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"stats\":[{\"webVitalTimings\":[{\"name\":\"https://github.com/login/oauth/authorize?client_id=29535c9f20a9c389407b\",\"ttfb\":5269.304999994347}],\"timestamp\":1606881342777,\"loggedIn\":false},{\"resourceTimings\":[{\"name\":\"https://github.githubassets.com/assets/frameworks-dab626668288a951c68b47d6ec626b3f.css\",\"entryType\":\"resource\",\"startTime\":5324.194999993779,\"duration\":83.4750000067288,\"initiatorType\":\"link\",\"nextHopProtocol\":\"\",\"workerStart\":0,\"redirectStart\""
		":0,\"redirectEnd\":0,\"fetchStart\":5324.194999993779,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":5407.670000000508,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/github-8c3ca722e6c15250825d65bfce81542e.css\",\"entryType\":\"resource\",\"startTime\":5324.599999992643,\""
		"duration\":85.640000004787,\"initiatorType\":\"link\",\"nextHopProtocol\":\"\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":5324.599999992643,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":5410.23999999743,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://"
		"gc.kis.v2.scr.kaspersky-labs.com/FD126C42-EBFA-4E12-B309-BB3FDD723AC1/main.js?attr=ufYvfMUG6vP85CVI0QZKxtTcJj-loIrL_evaVaKdHpp3_JgvPmzUU-ICpUQNgUL2Y0hApuVM9tgcbMBWfX85dTCUEUoyeYw7_L2IsFmUUC_pe6FyWswbpodUrJvP69Mj\",\"entryType\":\"resource\",\"startTime\":5325.190000003204,\"duration\":84.81999998912215,\"initiatorType\":\"script\",\"nextHopProtocol\":\"h2\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":5325.190000003204,\"domainLookupStart\":0,\"domainLookupEnd\":0,\""
		"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":5410.009999992326,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/environment-f0adafbf.js\",\"entryType\":\"resource\",\"startTime\":5326.505000004545,\"duration\":0,\"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\""
		"redirectEnd\":0,\"fetchStart\":5326.505000004545,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":5326.505000004545,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/chunk-frameworks-6b40be10.js\",\"entryType\":\"resource\",\"startTime\":5327.315000002272,\"duration\":0,\""
		"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":5327.315000002272,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":5327.315000002272,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/"
		"chunk-vendor-78fe54a2.js\",\"entryType\":\"resource\",\"startTime\":5327.984999996261,\"duration\":0,\"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":5327.984999996261,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":5327.984999996261,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\""
		"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/behaviors-99c26261.js\",\"entryType\":\"resource\",\"startTime\":5328.215000001364,\"duration\":0,\"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":5328.215000001364,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd"
		"\":5328.215000001364,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://github.githubassets.com/assets/oauth-a3496082.js\",\"entryType\":\"resource\",\"startTime\":5328.429999994114,\"duration\":164.62000001047272,\"initiatorType\":\"script\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":5328.429999994114,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0"
		",\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":5493.050000004587,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]},{\"name\":\"https://gc.kis.v2.scr.kaspersky-labs.com/FD126C42-EBFA-4E12-B309-BB3FDD723AC1/main.js?attr=ufYvfMUG6vP85CVI0QZKxtTcJj-loIrL_evaVaKdHpp3_JgvPmzUU-ICpUQNgUL2Y0hApuVM9tgcbMBWfX85dTCUEUoyeYw7_L2IsFmUUC_pe6FyWswbpodUrJvP69Mj\",\"entryType\":\"resource\",\"startTime\""
		":5447.864999994636,\"duration\":25.269999998272397,\"initiatorType\":\"script\",\"nextHopProtocol\":\"h2\",\"workerStart\":0,\"redirectStart\":0,\"redirectEnd\":0,\"fetchStart\":5447.864999994636,\"domainLookupStart\":0,\"domainLookupEnd\":0,\"connectStart\":0,\"connectEnd\":0,\"secureConnectionStart\":0,\"requestStart\":0,\"responseStart\":0,\"responseEnd\":5473.134999992908,\"transferSize\":0,\"encodedBodySize\":0,\"decodedBodySize\":0,\"serverTiming\":[],\"workerTiming\":[]}],\"timestamp\""
		":1606881342784,\"loggedIn\":false},{\"navigationTimings\":[{\"name\":\"https://github.com/login/oauth/authorize?client_id=29535c9f20a9c389407b\",\"entryType\":\"navigation\",\"startTime\":0,\"duration\":5547.48500000278,\"initiatorType\":\"navigation\",\"nextHopProtocol\":\"http/1.1\",\"workerStart\":0,\"redirectStart\":11.49499999883119,\"redirectEnd\":4872.17000000237,\"fetchStart\":4872.17000000237,\"domainLookupStart\":4872.17000000237,\"domainLookupEnd\":4872.17000000237,\"connectStart\""
		":4872.17000000237,\"connectEnd\":4872.17000000237,\"secureConnectionStart\":4872.17000000237,\"requestStart\":4876.33499999356,\"responseStart\":5269.304999994347,\"responseEnd\":5276.2150000053225,\"transferSize\":13195,\"encodedBodySize\":5333,\"decodedBodySize\":5333,\"serverTiming\":[],\"workerTiming\":[],\"unloadEventStart\":5305.684999999357,\"unloadEventEnd\":5306.580000004033,\"domInteractive\":5500.704999998561,\"domContentLoadedEventStart\":5532.974999994622,\"domContentLoadedEventEnd\""
		":5532.984999998007,\"domComplete\":5546.829999992042,\"loadEventStart\":5546.870000005583,\"loadEventEnd\":5547.48500000278,\"type\":\"navigate\",\"redirectCount\":1}],\"timestamp\":1606881342784,\"loggedIn\":false},{\"webVitalTimings\":[{\"name\":\"https://github.com/login/oauth/authorize?client_id=29535c9f20a9c389407b\",\"fcp\":5553.534999999101}],\"timestamp\":1606881342791,\"loggedIn\":false},{\"downloadedBundles\":[\"oauth.js\"],\"timestamp\":1606881342828,\"loggedIn\":false}]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("oauth-callback", 
		"URL=http://localhost:3001/oauth-callback?code=a28085fe1ee7c2a7b193", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}