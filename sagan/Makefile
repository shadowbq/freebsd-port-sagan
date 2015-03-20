# $FreeBSD$

PORTNAME=	sagan
DISTVERSION= ${GH_COMMIT}
CATEGORIES=	security
DISTFILES=	beave-sagan-1.0.0-RC5.tar.gz

MAINTAINER=	shadowbq@gmail.com
COMMENT=	Sagan uses a 'Snort like' engine and rules to analyze logs

LICENSE=	GPLv2

LIB_DEPENDS=liblognorm.so:${PORTSDIR}/devel/liblognorm \
			libpcre.so:${PORTSDIR}/devel/pcre \
			libdnet.so:${PORTSDIR}/net/libdnet \
			libjson-c.so:${PORTSDIR}/devel/json-c \
			libestr.so:${PORTSDIR}/devel/libestr

USE_GITHUB=	yes
GH_ACCOUNT=	beave
GH_PROJECT=	sagan
GH_TAG=		${GH_COMMIT}
GH_COMMIT=	5aef307

SUB_FILES=	pkg-message

USES=		gmake libtool
USE_AUTOTOOLS=	aclocal autoconf autoheader automake
AUTOMAKE_ARGS=	--add-missing

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

USE_RC_SUBR=	sagan

.include <bsd.port.options.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/sagan \
		${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}/var/log/sagan

.include <bsd.port.mk>
