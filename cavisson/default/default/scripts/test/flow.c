/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 12/27/2022 11:29:31
    Flow details:
    Build details: 4.10.0 (build# 33)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

//Home page cavisson

void flow()
{
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=http://cavisson.com/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "REDIRECT=YES",
        "LOCATION=https://www.cavisson.com/",
        INLINE_URLS,
            "URL=https://www.cavisson.com/", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:none", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-User:?1", "HEADER=Sec-Fetch-Dest:document", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_905ba59da3522da3dcb6136406ad0b76.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_single_b48f29a223d1760d6f3e1d0dfb850c96.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_single_411536fd225f7c2dc6daf53b293f3d11.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_single_8791b329842b434018f86964fbd1ff09.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.google.com/recaptcha/api.js?onload=wpformsRecaptchaLoad&render=explicit", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/logo/logo_original.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/banner/USTandCavisson2021.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/banner/insight-success-banner.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/banner/banner2aopti.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/banner/banner_new_opti.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/banner/banner3_opti.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/banner/business_continuity_opti.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/devops1.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/apes_slider.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/sre_slider.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/cloud-monitoring1b.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/product-icon/netstorm.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/product-icon/netcloud.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/product-icon/netocean.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/nethavoc.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/product-icon/diagnostic.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/product-icon/netvision.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/product-icon/netforest.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/sap.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/snmp.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/kubernetes.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/mongo-db.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/my-sql.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/ibm-db2.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/couchbase_a.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/dockers.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/rdt.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/rbu.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/icons/jms.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/logo/Michaels.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/logo/macys.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/logo/pathkind.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/logo/redbox.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/logo/nha.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/line-bg.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/award0.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/award1.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/award2.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/award3.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/award4.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/award5.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/award6.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/award7.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/svg/ask.svg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/svg/feedback.svg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/svg/demo.svg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/js/autoptimize_9836a29f7b2dff34b6183ab0686742fb.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            //URL commented due to error code : CONNECTION_REFUSED
            //"URL=https://69.61.127.66:9026/nv/cavisson/nv_bootstrap.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google-analytics.com/analytics.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_13a5250f3cb21fe97a4196a34dddde79.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_6d3d148c5a30bb7dc1bafe5dd300ce89.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_f1b664e7f1e8a8e6bea090d2e3f909a1.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/themes/onetone/images/home/products_bg.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/uploads/2020/10/y-cavisson.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=https://www.cavisson.com/wp-content/plugins/elementor/assets/lib/font-awesome/fonts/fontawesome-webfont.woff2?v=4.7.0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://www.cavisson.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=https://www.cavisson.com/wp-content/plugins/mobile-menu/includes/css/font/mobmenu.woff2?31192480", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://www.cavisson.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=https://www.cavisson.com/wp-content/plugins/wp-social-widget/assets/fonts/socialicon.ttf?4xqn5s", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://www.cavisson.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=https://www.cavisson.com/wp-content/plugins/magee-shortcodes/assets/bootstrap/fonts/glyphicons-halflings-regular.woff2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://www.cavisson.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID", END_INLINE,
            "URL=https://www.gstatic.com/recaptcha/releases/5qcenVbrhOy8zihcc2aHOWD4/recaptcha__en.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://www.cavisson.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://app.artibot.ai/loader.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://snap.licdn.com/li.lms-analytics/insight.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.youtube.com/iframe_api", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect");
    ns_web_url ("collect",
        "URL=https://www.google-analytics.com/j/collect?v=1&_v=j98&a=1091690110&t=pageview&_s=1&dl=https%3A%2F%2Fwww.cavisson.com%2F&ul=en-us&de=UTF-8&dt=Performance%20Testing%2C%20Monitoring%20%26%20Diagnostics%20Software%20%7C%20Cavisson%20-&sd=24-bit&sr=8192x4096&vp=775x473&je=0&_u=IEBAAEABAAAAACAAI~&jid=328239125&gjid=1781953393&cid=676091301.1672140511&tid=UA-77809548-1&_gid=1446675417.1672140511&_r=1&_slc=1&z=670810331",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.cavisson.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://www.youtube.com/iframe_api", END_INLINE,
            "URL=https://www.google.com/recaptcha/api2/anchor?ar=1&k=6Ldt8qEUAAAAAH-QhEOUuqZ3-IqCap0nlTw6xrli&co=aHR0cHM6Ly93d3cuY2F2aXNzb24uY29tOjQ0Mw..&hl=en&v=5qcenVbrhOy8zihcc2aHOWD4&size=normal&cb=9d74cjl1ax", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_2");
    ns_web_url ("collect_2",
        "URL=https://stats.g.doubleclick.net/j/collect?t=dc&aip=1&_r=3&v=1&_v=j98&tid=UA-77809548-1&cid=676091301.1672140511&jid=328239125&gjid=1781953393&_gid=1446675417.1672140511&_u=IEBAAEAAAAAAACAAI~&z=1275260779",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.cavisson.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("collect_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("version");
    ns_web_url ("version",
        "URL=https://api.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/version",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://www.cavisson.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://cdn.linkedin.oribi.io/partner/775971/domain/cavisson.com/token", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Origin:https://www.cavisson.com", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://px.ads.linkedin.com/collect?v=2&fmt=js&pid=775971&time=1672140510805&url=https%3A%2F%2Fwww.cavisson.com%2F", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.youtube.com/s/player/21149d65/www-widgetapi.vflset/www-widgetapi.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=YSC;VISITOR_INFO1_LIVE", END_INLINE,
            "URL=https://www.gstatic.com/recaptcha/releases/5qcenVbrhOy8zihcc2aHOWD4/styles__ltr.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.gstatic.com/recaptcha/releases/5qcenVbrhOy8zihcc2aHOWD4/recaptcha__en.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/ads/ga-audiences?t=sr&aip=1&_r=4&slf_rd=1&v=1&_v=j98&tid=UA-77809548-1&cid=676091301.1672140511&jid=328239125&_u=IEBAAEAAAAAAACAAI~&z=2030449341", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://px.ads.linkedin.com/collect?v=2&fmt=js&pid=775971&time=1672140510805&url=https%3A%2F%2Fwww.cavisson.com%2F&cookiesTest=true", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=li_sugr;lang;bcookie;lidc", END_INLINE,
            "URL=https://www.gstatic.com/recaptcha/api2/logo_48.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            //URL commented due to error code : CACHE_MISS
            //"URL=https://fonts.gstatic.com/s/roboto/v18/KFOmCnqEu92Fr1Mu4mxK.woff2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://www.google.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("version", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("token");
    ns_web_url ("token",
        "URL=https://cdn.linkedin.oribi.io/partner/775971/domain/cavisson.com/token",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=Content-Type:application/json",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://www.cavisson.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://www.google.com/recaptcha/api2/webworker.js?hl=en&v=5qcenVbrhOy8zihcc2aHOWD4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:same-origin", "HEADER=Sec-Fetch-Dest:worker", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.linkedin.com/px/li_sync?redirect=https%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D775971%26time%3D1672140510805%26url%3Dhttps%253A%252F%252Fwww.cavisson.com%252F%26cookiesTest%3Dtrue%26liSync%3Dtrue", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=li_sugr;bcookie;lidc;UserMatchHistory;AnalyticsSyncHistory", END_INLINE,
            "URL=https://www.google.com/recaptcha/api2/bframe?hl=en&v=5qcenVbrhOy8zihcc2aHOWD4&k=6Ldt8qEUAAAAAH-QhEOUuqZ3-IqCap0nlTw6xrli", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://px.ads.linkedin.com/collect?v=2&fmt=js&pid=775971&time=1672140510805&url=https%3A%2F%2Fwww.cavisson.com%2F&cookiesTest=true&liSync=true", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=li_sugr;lang;bcookie;lidc;UserMatchHistory;AnalyticsSyncHistory;lang", END_INLINE,
            "URL=https://prod.artibotcdn.com/manifest/_ArtiBotLauncherCB_Manifest?_=_", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://prod.artibotcdn.com/launcher.4514.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("token", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("settings");
    ns_web_url ("settings",
        "URL=https://api-cdn.prod-aws.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/settings?settingsVersion=20&botVersionId=12034483-9bfe-47a8-bbfa-ada6398deb1f",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://www.cavisson.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            //URL commented due to error code : ABORTED
            //"URL=https://app.artibot.ai/chat-window?i=948c4b2e-cf5d-4d58-9e77-2b636e5bbd98&cbv=12034483-9bfe-47a8-bbfa-ada6398deb1f&v=20&cp=https%3A%2F%2Fwww.cavisson.com%2F&th=light&em=true", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://app.artibot.ai/chat-window?i=948c4b2e-cf5d-4d58-9e77-2b636e5bbd98&cbv=12034483-9bfe-47a8-bbfa-ada6398deb1f&v=20&cp=https%3A%2F%2Fwww.cavisson.com%2F&th=light&em=true&sh=false&tb=true", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/uploads/2016/05/cropped-Cavisson.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or", END_INLINE,
            "URL=https://app.artibot.ai/chat_window.4514.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://js.stripe.com/v3/", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://app.artibot.ai/chat_window.4514.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,400i,600,700", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fonts.googleapis.com/css?family=Source+Serif+Pro:300,400,400i,600,700", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fonts.googleapis.com/css?family=Space+Mono:300,400,400i,600,700", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/uploads/2016/05/cropped-Cavisson-32x32.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or", END_INLINE,
            "URL=https://js.stripe.com/v3/m-outer-da551b803dc55c2dc0b4b9bdfeabba62.html#url=https%3A%2F%2Fapp.artibot.ai%2Fchat-window%3Fi%3D948c4b2e-cf5d-4d58-9e77-2b636e5bbd98%26cbv%3D12034483-9bfe-47a8-bbfa-ada6398deb1f%26v%3D20%26cp%3Dhttps%253A%252F%252Fwww.cavisson.com%252F%26th%3Dlight%26em%3Dtrue%26sh%3Dfalse%26tb%3Dtrue&title=ArtiBot.ai%20%E2%80%94%20AI%20Powered%20Bot%20for%20Lead%20Capture&referrer=&muid=NA&sid=NA&version=6&preview=false", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://js.stripe.com/v3/fingerprinted/js/m-outer-43a3f10a091543c9b0b5776f4b2fbc8d.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://api-cdn.prod-aws.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/settings?settingsVersion=20&botVersionId=12034483-9bfe-47a8-bbfa-ada6398deb1f", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Origin:https://app.artibot.ai", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://m.stripe.network/inner.html#url=https%3A%2F%2Fapp.artibot.ai%2Fchat-window%3Fi%3D948c4b2e-cf5d-4d58-9e77-2b636e5bbd98%26cbv%3D12034483-9bfe-47a8-bbfa-ada6398deb1f%26v%3D20%26cp%3Dhttps%253A%252F%252Fwww.cavisson.com%252F%26th%3Dlight%26em%3Dtrue%26sh%3Dfalse%26tb%3Dtrue&title=ArtiBot.ai%20%E2%80%94%20AI%20Powered%20Bot%20for%20Lead%20Capture&referrer=&muid=NA&sid=NA&version=6&preview=false", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://m.stripe.network/out-4.5.42.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("settings", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("X");
    ns_web_url ("X",
        "URL=https://m.stripe.com/6",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://m.stripe.network",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "JTdCJTIydjIlMjIlM0ExJTJDJTIyaWQlMjIlM0ElMjI0NzYyNmNlMDNjODM3NjU5YzllOWU4OTg2ZGFjMjc2OSUyMiUyQyUyMnQlMjIlM0ExNjEuNyUyQyUyMnRhZyUyMiUzQSUyMjQuNS40MiUyMiUyQyUyMnNyYyUyMiUzQSUyMmpzJTIyJTJDJTIyYSUyMiUzQSU3QiUyMmElMjIlM0ElN0IlMjJ2JTIyJTNBJTIydHJ1ZSUyMiUyQyUyMnQlMjIlM0EwLjQlN0QlMkMlMjJiJTIyJTNBJTdCJTIydiUyMiUzQSUyMmZhbHNlJTIyJTJDJTIydCUyMiUzQTAlN0QlMkMlMjJjJTIyJTNBJTdCJTIydiUyMiUzQSUyMmVuLVVTJTJDZW4lMjIlMkMlMjJ0JTIyJTNBMCU3RCUyQyUyMmQlMjIlM0ElN0IlMjJ2JTIyJTNBJTIyTGludXglMjB4ODZfNjQlMjIlMkMlMjJ0JTIyJTNBMCU3RCUyQyUyMmUlMjIlM0ElN0IlMjJ2JTIyJTNBJTIyJTIyJTJDJTIydCUyMiUzQTAuMSU3RCUyQyUyMmYlMjIlM0ElN0IlMjJ2JTIyJTNBJTIyODE5MndfNDA5NmhfMjRkXzFyJTIyJTJDJTIydCUyMiUzQTAuMSU3RCUyQyUyMmclMjIlM0ElN0IlMjJ2JTIyJTNBJTIyLTYlMjIlMkMlMjJ0JTIyJTNBMCU3RCUyQyUyMmglMjIlM0ElN0IlMjJ2JTIyJTNBJTIyZmFsc2UlMjIlMkMlMjJ0JTIyJTNBMC4xJTdEJTJDJTIyaSUyMiUzQSU3QiUyMnYlMjIlM0ElMjJzZXNzaW9uU3RvcmFnZS1lbmFibGVkJTJDJTIwbG9jYWxTdG9yYWdlLWVuYWJsZWQlMjIlMkMlMjJ0JTIyJTNBMS42JTdEJTJDJTIyaiUyMiUzQSU3QiUyMnYlMjIlM0ElMjIwMDAwMDAwMTAwMDAwMDAwMDAwMTEwMDAxMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMTEwMDAwJTIyJTJDJTIydCUyMiUzQTE1Ny41JTJDJTIyYXQlMjIlM0E2OC4zJTdEJTJDJTIyayUyMiUzQSU3QiUyMnYlMjIlM0ElMjIlMjIlMkMlMjJ0JTIyJTNBMCU3RCUyQyUyMmwlMjIlM0ElN0IlMjJ2JTIyJTNBJTIyTW96aWxsYSUyRjUuMCUyMChYMTElM0IlMjBMaW51eCUyMHg4Nl82NCklMjBBcHBsZVdlYktpdCUyRjUzNy4zNiUyMChLSFRNTCUyQyUyMGxpa2UlMjBHZWNrbyklMjBDaHJvbWUlMkYxMDQuMC41MTEyLjEyNCUyMFNhZmFyaSUyRjUzNy4zNiUyMiUyQyUyMnQlMjIlM0EwJTdEJTJDJTIybSUyMiUzQSU3QiUyMnYlMjIlM0ElMjIlMjIlMkMlMjJ0JTIyJTNBMC4xJTdEJTJDJTIybiUyMiUzQSU3QiUyMnYlMjIlM0ElMjJ0cnVlJTIyJTJDJTIydCUyMiUzQTg5LjglMkMlMjJhdCUyMiUzQTAuNSU3RCUyQyUyMm8lMjIlM0ElN0IlMjJ2JTIyJTNBJTIyNTg4MDM1YzgwNWU3NDgwMTdhYmFlNjg2YzgyZGZlYWQlMjIlMkMlMjJ0JTIyJTNBMzklN0QlN0QlMkMlMjJiJTIyJTNBJTdCJTIyYSUyMiUzQSUyMiUyMiUyQyUyMmIlMjIlM0ElMjJodHRwcyUzQSUyRiUyRmp0NXpZVkpZcHFUMmVyYW1MY0IwaFhTRnlRQUh3eUpsVDVZOVFfOF8xZHcuQ2xfck9xUHhSV3oxaG9KUzB6THdTT2t6ZGZha3FodERUb1l1WXVtYWE3cy5vRmFiYktXd0N6SndqdDBOX01EVWcyc1JrVmxBd0liaFJlNzI5TW03bFdRJTJGVlpIdWJ3QWtpT0ROOFk5WG9NSXNMT3RpMXRSeWhoVHVXYzdCazhTRjF1VSUzRkM3UXJXT2JIOXRicmJqXzJsM0l2dGFVQ19paGVidHppWk9MS2hweDN6WGclM0REVlE3eWtpNTNVS0d6c21YTnd0QnBWTHBFS2QxQ0FNR2RjT0RQclFObmxJJTI2MGJMRWExSEJSOWx3U0FMUDdxWUNPLW5pc0FscHBvdEx0eFZOZXZpSU9jayUzRElqZzd4U0wtQkhPRU9acFI2QUh5YzNXNk5OTk5VUzExeUwzQjVtTHI0R0ElMjZ1bkI4R0tqVUdFWWdSbTZrcHVDam1Jc3lYcF9hUHI3dGdWNkFEbUx1RnJnJTNEaEFTZGVjMng3TzRwWk44dXdYSzduNWw2MUpmc3JuWV94MENJb1ZHWVJYcyUyNm9xT2J2a3FOT1U3d0cwbzVuVk90dHRoeUtiZTQzMFFUcEtEaGtOS1JYRzglM0RDMXVHU0gwSHdscXp4V1BDeUZiWjkxc3NOTmFxdTdSSDlncnpQV3UtZVVBJTI2TVpFVEJuS1Z5dUxrYTZFclhYNk9mS2F3cmlfVXd6VHVtVVJQUklxU1FUYyUzRFpoRzRtVk51WHVxd2pPQXg3UVFFSmFiU192eFhNRV9PMzBLeUl2Zl8weEElMjZEQUY2cEIlM0QyU3hQcmElMjZ2dHNtYTAlM0Q4azNqX0clMjZVNDc3dWolM0QyU3hQcmElMjIlMkMlMjJjJTIyJTNBJTIyak5RU1ZZV1JmMjBDTjJtaTRQOVl0Y3hBOVFDbFlKQVVNVmVSTUJZdWZVcyUyMiUyQyUyMmQlMjIlM0ElMjJOQSUyMiUyQyUyMmUlMjIlM0ElMjJOQSUyMiUyQyUyMmYlMjIlM0FmYWxzZSUyQyUyMmclMjIlM0F0cnVlJTJDJTIyaCUyMiUzQXRydWUlMkMlMjJpJTIyJTNBJTVCJTIybG9jYXRpb24lMjIlNUQlMkMlMjJqJTIyJTNBJTVCJTVEJTJDJTIybiUyMiUzQTcwLjYwMDAwMDAyMzg0MTg2JTJDJTIydSUyMiUzQSUyMmFwcC5hcnRpYm90LmFpJTIyJTdEJTJDJTIyaCUyMiUzQSUyMmY4ODZkMTFiOGVhMzhiMTdmMDU5JTIyJTdE",
        BODY_END
    );

    ns_end_transaction("X", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("settings_2");
    ns_web_url ("settings_2",
        "URL=https://api-cdn.prod-aws.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/settings?settingsVersion=20&botVersionId=12034483-9bfe-47a8-bbfa-ada6398deb1f",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=Content-Type:application/json",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://app.artibot.ai",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://api.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/chats/init/", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Origin:https://app.artibot.ai", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("settings_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_3");
    ns_web_url ("index_3",
        "URL=https://api.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/chats/init/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=Content-Type:application/json",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://app.artibot.ai",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"botVersionId":"12034483-9bfe-47a8-bbfa-ada6398deb1f","contactId":"66f7af86-fd5e-41d6-a805-ac9b80f9375b","state":null,"timezone":"America/Chicago"}",
        BODY_END
    );

    ns_end_transaction("index_3", NS_AUTO_STATUS);
    ns_page_think_time(47.475);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("index_2");
    ns_web_url ("index_2",
        "URL=https://www.cavisson.com/cavisson-systems-performance-intelligence-platform/",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or",
        INLINE_URLS,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_2d1d83a3e924710012bc38d490f79a93.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_single_b48f29a223d1760d6f3e1d0dfb850c96.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_single_411536fd225f7c2dc6daf53b293f3d11.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_single_8791b329842b434018f86964fbd1ff09.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or", END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=AW-846414309", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://cavisson.com/wp-content/themes/onetone/images/pyramid.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_ga;_gid;_gat", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/js/autoptimize_e359ca4dce870cd409bafb1bf868f16f.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or", END_INLINE,
            //URL commented due to error code : CONNECTION_REFUSED
            //"URL=https://69.61.127.66:9026/nv/cavisson/nv_bootstrap.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google-analytics.com/analytics.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_13a5250f3cb21fe97a4196a34dddde79.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_6d3d148c5a30bb7dc1bafe5dd300ce89.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or", END_INLINE,
            "URL=https://www.cavisson.com/wp-content/cache/autoptimize/css/autoptimize_f1b664e7f1e8a8e6bea090d2e3f909a1.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/846414309/?random=1672140561551&cv=11&fst=1672140561551&bg=ffffff&guid=ON&async=1&gtm=2oabu0&u_w=1313&u_h=489&hn=www.googleadservices.com&frm=0&url=https%3A%2F%2Fwww.cavisson.com%2Fcavisson-systems-performance-intelligence-platform%2F&ref=https%3A%2F%2Fwww.cavisson.com%2F&tiba=Performance%20Intelligence%20Platform%20for%20Mission%20Critical%20Applications&auid=288746387.1672140562&uaa=x86&uab=64&uafvl=%2520Not%2520A%253BBrand%3B99.0.0.0%7CChromium%3B104.0.5112.124&uap=Linux&uapv=5.4.0&uaw=0&data=event%3Dgtag.config&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.gstatic.com/wcm/loader.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_3");
    ns_web_url ("collect_3",
        "URL=https://www.google-analytics.com/j/collect?v=1&_v=j98&a=1122298644&t=pageview&_s=1&dl=https%3A%2F%2Fwww.cavisson.com%2Fcavisson-systems-performance-intelligence-platform%2F&ul=en-us&de=UTF-8&dt=Performance%20Intelligence%20Platform%20for%20Mission%20Critical%20Applications&sd=24-bit&sr=1313x489&vp=1298x361&je=0&_u=AACAAEABAAAAACAAI~&jid=&gjid=&cid=676091301.1672140511&tid=UA-77809548-1&_gid=1446675417.1672140511&_slc=1&z=18657124",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.cavisson.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://www.gstatic.com/recaptcha/releases/5qcenVbrhOy8zihcc2aHOWD4/recaptcha__en.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://www.cavisson.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://app.artibot.ai/loader.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://snap.licdn.com/li.lms-analytics/insight.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.gstatic.com/call-tracking/call-tracking_7.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("version_2");
    ns_web_url ("version_2",
        "URL=https://api.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/version",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://www.cavisson.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://px.ads.linkedin.com/collect?v=2&fmt=js&pid=775971&time=1672140561767&url=https%3A%2F%2Fwww.cavisson.com%2Fcavisson-systems-performance-intelligence-platform%2F", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=li_sugr;lang;bcookie;lidc;UserMatchHistory;AnalyticsSyncHistory;lang", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/846414309/?random=1672140561551&cv=11&fst=1672138800000&bg=ffffff&guid=ON&async=1&gtm=2oabu0&u_w=1313&u_h=489&frm=0&url=https%3A%2F%2Fwww.cavisson.com%2Fcavisson-systems-performance-intelligence-platform%2F&ref=https%3A%2F%2Fwww.cavisson.com%2F&tiba=Performance%20Intelligence%20Platform%20for%20Mission%20Critical%20Applications&data=event%3Dgtag.config&fmt=3&is_vtc=1&random=1857662763&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/recaptcha/api2/anchor?ar=1&k=6Ldt8qEUAAAAAH-QhEOUuqZ3-IqCap0nlTw6xrli&co=aHR0cHM6Ly93d3cuY2F2aXNzb24uY29tOjQ0Mw..&hl=en&v=5qcenVbrhOy8zihcc2aHOWD4&size=normal&cb=78va016bcjim", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googleadservices.com/pagead/conversion/846414309/wcm?cc=ZZ&dn=16503197412&cl=irwhCLex05cBEOWDzZMD&ref=https%3A%2F%2Fwww.cavisson.com%2F&ct_eid=2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:https://www.cavisson.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://prod.artibotcdn.com/manifest/_ArtiBotLauncherCB_Manifest?_=_", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://prod.artibotcdn.com/launcher.4514.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.gstatic.com/recaptcha/releases/5qcenVbrhOy8zihcc2aHOWD4/styles__ltr.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.gstatic.com/recaptcha/releases/5qcenVbrhOy8zihcc2aHOWD4/recaptcha__en.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("version_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("settings_3");
    ns_web_url ("settings_3",
        "URL=https://api-cdn.prod-aws.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/settings?settingsVersion=20&botVersionId=12034483-9bfe-47a8-bbfa-ada6398deb1f",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://www.cavisson.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://www.gstatic.com/recaptcha/api2/logo_48.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fonts.gstatic.com/s/roboto/v18/KFOmCnqEu92Fr1Mu4mxK.woff2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://www.google.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("settings_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("wcm");
    ns_web_url ("wcm",
        "URL=https://www.google.com/pagead/attribution/wcm?cc=ZZ&dn=16503197412&cl=irwhCLex05cBEOWDzZMD",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:null",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            //URL commented due to error code : ABORTED
            //"URL=https://app.artibot.ai/chat-window?i=948c4b2e-cf5d-4d58-9e77-2b636e5bbd98&cbv=12034483-9bfe-47a8-bbfa-ada6398deb1f&v=20&cp=https%3A%2F%2Fwww.cavisson.com%2Fcavisson-systems-performance-intelligence-platform%2F&th=light&em=true", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googleadservices.com/pagead/conversion/846414309/wcm?cc=ZZ&dn=18007016125&cl=9penCM3u55cBEOWDzZMD&ref=https%3A%2F%2Fwww.cavisson.com%2F&ct_eid=2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:https://www.cavisson.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://app.artibot.ai/chat-window?i=948c4b2e-cf5d-4d58-9e77-2b636e5bbd98&cbv=12034483-9bfe-47a8-bbfa-ada6398deb1f&v=20&cp=https%3A%2F%2Fwww.cavisson.com%2Fcavisson-systems-performance-intelligence-platform%2F&th=light&em=true&sh=false&tb=true", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/recaptcha/api2/webworker.js?hl=en&v=5qcenVbrhOy8zihcc2aHOWD4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:same-origin", "HEADER=Sec-Fetch-Dest:worker", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("wcm", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("wcm_2");
    ns_web_url ("wcm_2",
        "URL=https://www.google.com/pagead/attribution/wcm?cc=ZZ&dn=18007016125&cl=9penCM3u55cBEOWDzZMD",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:null",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://app.artibot.ai/chat_window.4514.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://js.stripe.com/v3/", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://app.artibot.ai/chat_window.4514.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,400i,600,700", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fonts.googleapis.com/css?family=Source+Serif+Pro:300,400,400i,600,700", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fonts.googleapis.com/css?family=Space+Mono:300,400,400i,600,700", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/recaptcha/api2/bframe?hl=en&v=5qcenVbrhOy8zihcc2aHOWD4&k=6Ldt8qEUAAAAAH-QhEOUuqZ3-IqCap0nlTw6xrli", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://js.stripe.com/v3/m-outer-da551b803dc55c2dc0b4b9bdfeabba62.html#url=https%3A%2F%2Fapp.artibot.ai%2Fchat-window%3Fi%3D948c4b2e-cf5d-4d58-9e77-2b636e5bbd98%26cbv%3D12034483-9bfe-47a8-bbfa-ada6398deb1f%26v%3D20%26cp%3Dhttps%253A%252F%252Fwww.cavisson.com%252Fcavisson-systems-performance-intelligence-platform%252F%26th%3Dlight%26em%3Dtrue%26sh%3Dfalse%26tb%3Dtrue&title=ArtiBot.ai%20%E2%80%94%20AI%20Powered%20Bot%20for%20Lead%20Capture&referrer=&muid=NA&sid=NA&version=6&preview=false", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://js.stripe.com/v3/fingerprinted/js/m-outer-43a3f10a091543c9b0b5776f4b2fbc8d.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://api-cdn.prod-aws.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/settings?settingsVersion=20&botVersionId=12034483-9bfe-47a8-bbfa-ada6398deb1f", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Origin:https://app.artibot.ai", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://m.stripe.network/inner.html#url=https%3A%2F%2Fapp.artibot.ai%2Fchat-window%3Fi%3D948c4b2e-cf5d-4d58-9e77-2b636e5bbd98%26cbv%3D12034483-9bfe-47a8-bbfa-ada6398deb1f%26v%3D20%26cp%3Dhttps%253A%252F%252Fwww.cavisson.com%252Fcavisson-systems-performance-intelligence-platform%252F%26th%3Dlight%26em%3Dtrue%26sh%3Dfalse%26tb%3Dtrue&title=ArtiBot.ai%20%E2%80%94%20AI%20Powered%20Bot%20for%20Lead%20Capture&referrer=&muid=NA&sid=NA&version=6&preview=false", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://m.stripe.network/out-4.5.42.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("wcm_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("X_2");
    ns_web_url ("X_2",
        "URL=https://m.stripe.com/6",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://m.stripe.network",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=m",
        BODY_BEGIN,
            "JTdCJTIydjIlMjIlM0ExJTJDJTIyaWQlMjIlM0ElMjI2MjIwZTNjMDQ5MjcyNjkyZTcwMWRkNTU5NDljZWFjYSUyMiUyQyUyMnQlMjIlM0E0My41JTJDJTIydGFnJTIyJTNBJTIyNC41LjQyJTIyJTJDJTIyc3JjJTIyJTNBJTIyanMlMjIlMkMlMjJhJTIyJTNBJTdCJTIyYSUyMiUzQSU3QiUyMnYlMjIlM0ElMjJ0cnVlJTIyJTJDJTIydCUyMiUzQTAuNCU3RCUyQyUyMmIlMjIlM0ElN0IlMjJ2JTIyJTNBJTIyZmFsc2UlMjIlMkMlMjJ0JTIyJTNBMCU3RCUyQyUyMmMlMjIlM0ElN0IlMjJ2JTIyJTNBJTIyZW4tVVMlMkNlbiUyMiUyQyUyMnQlMjIlM0EwLjElN0QlMkMlMjJkJTIyJTNBJTdCJTIydiUyMiUzQSUyMkxpbnV4JTIweDg2XzY0JTIyJTJDJTIydCUyMiUzQTAlN0QlMkMlMjJlJTIyJTNBJTdCJTIydiUyMiUzQSUyMiUyMiUyQyUyMnQlMjIlM0EwLjElN0QlMkMlMjJmJTIyJTNBJTdCJTIydiUyMiUzQSUyMjEzMTN3XzQ4OWhfMjRkXzFyJTIyJTJDJTIydCUyMiUzQTAlN0QlMkMlMjJnJTIyJTNBJTdCJTIydiUyMiUzQSUyMi02JTIyJTJDJTIydCUyMiUzQTAlN0QlMkMlMjJoJTIyJTNBJTdCJTIydiUyMiUzQSUyMmZhbHNlJTIyJTJDJTIydCUyMiUzQTAuMSU3RCUyQyUyMmklMjIlM0ElN0IlMjJ2JTIyJTNBJTIyc2Vzc2lvblN0b3JhZ2UtZW5hYmxlZCUyQyUyMGxvY2FsU3RvcmFnZS1lbmFibGVkJTIyJTJDJTIydCUyMiUzQTIlN0QlMkMlMjJqJTIyJTNBJTdCJTIydiUyMiUzQSUyMjAwMDAwMDAxMDAwMDAwMDAwMDAxMTAwMDEwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAxMTAwMDAlMjIlMkMlMjJ0JTIyJTNBMzkuMSUyQyUyMmF0JTIyJTNBMC4zJTdEJTJDJTIyayUyMiUzQSU3QiUyMnYlMjIlM0ElMjIlMjIlMkMlMjJ0JTIyJTNBMCU3RCUyQyUyMmwlMjIlM0ElN0IlMjJ2JTIyJTNBJTIyTW96aWxsYSUyRjUuMCUyMChYMTElM0IlMjBMaW51eCUyMHg4Nl82NCklMjBBcHBsZVdlYktpdCUyRjUzNy4zNiUyMChLSFRNTCUyQyUyMGxpa2UlMjBHZWNrbyklMjBDaHJvbWUlMkYxMDQuMC41MTEyLjEyNCUyMFNhZmFyaSUyRjUzNy4zNiUyMiUyQyUyMnQlMjIlM0EwLjElN0QlMkMlMjJtJTIyJTNBJTdCJTIydiUyMiUzQSUyMiUyMiUyQyUyMnQlMjIlM0EwLjElN0QlMkMlMjJuJTIyJTNBJTdCJTIydiUyMiUzQSUyMnRydWUlMjIlMkMlMjJ0JTIyJTNBMzguMiU3RCUyQyUyMm8lMjIlM0ElN0IlMjJ2JTIyJTNBJTIyNTg4MDM1YzgwNWU3NDgwMTdhYmFlNjg2YzgyZGZlYWQlMjIlMkMlMjJ0JTIyJTNBMzcuNyU3RCU3RCUyQyUyMmIlMjIlM0ElN0IlMjJhJTIyJTNBJTIyJTIyJTJDJTIyYiUyMiUzQSUyMmh0dHBzJTNBJTJGJTJGanQ1ellWSllwcVQyZXJhbUxjQjBoWFNGeVFBSHd5SmxUNVk5UV84XzFkdy5DbF9yT3FQeFJXejFob0pTMHpMd1NPa3pkZmFrcWh0RFRvWXVZdW1hYTdzLm9GYWJiS1d3Q3pKd2p0ME5fTURVZzJzUmtWbEF3SWJoUmU3MjlNbTdsV1ElMkZWWkh1YndBa2lPRE44WTlYb01Jc0xPdGkxdFJ5aGhUdVdjN0JrOFNGMXVVJTNGQzdRcldPYkg5dGJyYmpfMmwzSXZ0YVVDX2loZWJ0emlaT0xLaHB4M3pYZyUzRERWUTd5a2k1M1VLR3pzbVhOd3RCcFZMcEVLZDFDQU1HZGNPRFByUU5ubEklMjYwYkxFYTFIQlI5bHdTQUxQN3FZQ08tbmlzQWxwcG90THR4Vk5ldmlJT2NrJTNESWpnN3hTTC1CSE9FT1pwUjZBSHljM1c2Tk5OTlVTMTF5TDNCNW1McjRHQSUyNnVuQjhHS2pVR0VZZ1JtNmtwdUNqbUlzeVhwX2FQcjd0Z1Y2QURtTHVGcmclM0RoQVNkZWMyeDdPNHBaTjh1d1hLN241bDYxSmZzcm5ZX3gwQ0lvVkdZUlhzJTI2b3FPYnZrcU5PVTd3RzBvNW5WT3R0dGh5S2JlNDMwUVRwS0Roa05LUlhHOCUzRHM3STFLekhUZksxellTT3lUV0NUdHlnOU9mdDhZenAxZXhRSlRqS216Tm8lMjZNWkVUQm5LVnl1TGthNkVyWFg2T2ZLYXdyaV9Vd3pUdW1VUlBSSXFTUVRjJTNEWmhHNG1WTnVYdXF3ak9BeDdRUUVKYWJTX3Z4WE1FX08zMEt5SXZmXzB4QSUyNkRBRjZwQiUzRDJTeFByYSUyNnZ0c21hMCUzRDhrM2pfRyUyNlU0Nzd1aiUzRDJTeFByYSUyMiUyQyUyMmMlMjIlM0ElMjJqTlFTVllXUmYyMENOMm1pNFA5WXRjeEE5UUNsWUpBVU1WZVJNQll1ZlVzJTIyJTJDJTIyZCUyMiUzQSUyMk5BJTIyJTJDJTIyZSUyMiUzQSUyMk5BJTIyJTJDJTIyZiUyMiUzQWZhbHNlJTJDJTIyZyUyMiUzQXRydWUlMkMlMjJoJTIyJTNBdHJ1ZSUyQyUyMmklMjIlM0ElNUIlMjJsb2NhdGlvbiUyMiU1RCUyQyUyMmolMjIlM0ElNUIlNUQlMkMlMjJuJTIyJTNBNjIlMkMlMjJ1JTIyJTNBJTIyYXBwLmFydGlib3QuYWklMjIlN0QlMkMlMjJoJTIyJTNBJTIyMGY1NGJmYmUzMTdkNGUyOGYyMDIlMjIlN0Q=",
        BODY_END
    );

    ns_end_transaction("X_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("index_4");
    ns_web_url ("index_4",
        "URL=https://www.cavisson.com/cavisson-systems-performance-intelligence-platform/?\cavisson.ico",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:image",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=_wpjshd_session_;PHPSESSID;_ga;_gid;_gat;ln_or;_gcl_au"
    );

    ns_end_transaction("index_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("settings_4");
    ns_web_url ("settings_4",
        "URL=https://api-cdn.prod-aws.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/settings?settingsVersion=20&botVersionId=12034483-9bfe-47a8-bbfa-ada6398deb1f",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=Content-Type:application/json",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://app.artibot.ai",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://api.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/chats/init/", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Origin:https://app.artibot.ai", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("settings_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_5");
    ns_web_url ("index_5",
        "URL=https://api.artibot.ai/api/bots/948c4b2e-cf5d-4d58-9e77-2b636e5bbd98/chats/init/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=Content-Type:application/json",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://app.artibot.ai",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"botVersionId":"12034483-9bfe-47a8-bbfa-ada6398deb1f","contactId":"66f7af86-fd5e-41d6-a805-ac9b80f9375b","state":"Fi0xBJlSp6S0iaA90VbT2xrC/0H8hvGWrcZGr5BqDCY+dltTe0ZJQP8/U8XvaP246VITHWvWy89akZoYHIjGlQwYlKzbZJd9E7Xc4P78hAwLR0sBeCv/u9F0j0/Ps7OEsLMj9xylCSs=","timezone":"America/Chicago"}",
        BODY_END
    );

    ns_end_transaction("index_5", NS_AUTO_STATUS);
    ns_page_think_time(5.144);

}
