$NetBSD: patch-src_zmf.cpp,v 1.3 2020/08/25 16:42:21 gdt Exp $

\todo Explain

--- src/zmf.cpp.orig	2017-02-15 00:51:13.260940737 +0000
+++ src/zmf.cpp
@@ -293,7 +293,7 @@ int main( int argc, char *argv[] )
 		Debug( 1, "Got image, writing to %s", path );
 
 		FILE *fd = 0;
-		if ( (fd = fopen( path, "w" )) < 0 )
+		if ( (fd = fopen( path, "w" )) == 0 )
 		{
 			Error( "Can't fopen '%s': %s", path, strerror(errno) );
 			exit( -1 );
