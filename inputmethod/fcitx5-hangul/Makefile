# $NetBSD: Makefile,v 1.3 2021/03/02 13:24:53 ryoon Exp $

DISTNAME=	fcitx5-hangul-5.0.2
CATEGORIES=	inputmethod
MASTER_SITES=	https://download.fcitx-im.org/fcitx5/fcitx5-hangul/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	ryoon@NetBSD.org
HOMEPAGE=	https://github.com/fcitx/fcitx5-hangul
COMMENT=	Hangul Wrapper for Fcitx5
LICENSE=	gnu-gpl-v2

BUILD_DEPENDS+=	extra-cmake-modules-[0-9]*:../../devel/extra-cmake-modules

USE_CMAKE=		yes
USE_PKGLOCALEDIR=	yes
USE_LANGUAGES=		c c++

.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../inputmethod/fcitx5/buildlink3.mk"
.include "../../inputmethod/libhangul/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
