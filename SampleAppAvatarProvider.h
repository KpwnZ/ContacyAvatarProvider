#import "Headers/CNContactAvatarProvider.h"
#import "Headers/CNNotification.h"

@interface SampleAppAvatarProvider : CNContactAvatarProvider

- (UIImage *)fetchAvatarForContactNotification:(CNNotification *)notification;

@end
