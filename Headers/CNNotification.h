#import <objc/NSObject.h>

@class NCNotificationRequest, NCNotificationContent, UNNotificationContent, NSString, NSDictionary;

@interface CNNotification : NSObject
@property(nonatomic, copy) NSString *applicationIdentifier;
@property(nonatomic, retain) NSDictionary *notificationInfo;
@property(nonatomic, retain) NCNotificationContent *content;
@property(nonatomic, retain) UNNotificationContent *userNotificationContent;
@property(nonatomic, retain) NCNotificationRequest *request;
@end