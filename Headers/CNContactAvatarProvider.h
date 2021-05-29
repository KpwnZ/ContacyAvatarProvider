#import <objc/NSObject.h>
#import "CNNotification.h"

@class UIImage, NSURL, NSData;

@interface CNContactAvatarProvider : NSObject
+ (NSData *)sendRequestWithURL:(NSURL *)url;
- (UIImage *)fetchAvatarForContactNotification:(CNNotification *)contact;
@end
