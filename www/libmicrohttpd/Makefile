# $NetBSD: Makefile,v 1.61 2021/01/14 17:17:30 wiz Exp $

DISTNAME=	libmicrohttpd-0.9.72
PKGREVISION=	2
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_GNU:=libmicrohttpd/}

MAINTAINER=	nikita@NetBSD.org
HOMEPAGE=	https://www.gnu.org/software/libmicrohttpd/
COMMENT=	Small C library to run an HTTP server as part of another app
LICENSE=	gnu-lgpl-v2.1

USE_LIBTOOL=		yes
USE_TOOLS+=		pkg-config gettext
GNU_CONFIGURE=		yes
INFO_FILES=		yes
# 2 test failures as of 0.9.72
# FAIL: test_concurrent_stop
# FAIL: perf_get_concurrent
TEST_TARGET=		check

PKGCONFIG_OVERRIDE+=	libmicrohttpd.pc.in
CONFIGURE_ARGS+=	--enable-https

.include "../../security/gnutls/buildlink3.mk"
# This is actually only needed for tests, but linked
BUILDLINK_DEPMETHOD.curl=	build
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
