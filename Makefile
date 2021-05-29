ARCHS = arm64 arm64e
include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = SampleAppAvatarProvider

SampleAppAvatarProvider_FILES = SampleAppAvatarProvider.mm
SampleAppAvatarProvider_INSTALL_PATH = /Library/Contacy/ContactImageProvider
SampleAppAvatarProvider_FRAMEWORKS = UIKit
SampleAppAvatarProvider_LDFLAGS = ./ContactNotificationKit.tbd
SampleAppAvatarProvider_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/bundle.mk
