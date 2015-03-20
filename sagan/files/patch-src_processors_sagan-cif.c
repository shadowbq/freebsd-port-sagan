--- src/processors/sagan-cif.c.orig	2015-03-20 03:46:55 UTC
+++ src/processors/sagan-cif.c
@@ -41,7 +41,7 @@
 #include <time.h>
 #include <pthread.h>
 #include <curl/curl.h>
-#include <json/json.h>
+#include <json.h>
 
 #include "sagan.h"
 #include "sagan-defs.h"
