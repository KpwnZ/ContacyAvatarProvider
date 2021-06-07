#import <UserNotifications/UserNotifications.h>
#import <objc/NSObject.h>

@class NCNotificationRequest, NCNotificationContent, UNNotificationContent, NSString, NSDictionary;

@interface NCNotificationContent : NSObject
@property(nonatomic, copy, readonly) NSString *header;    //@synthesize header=_header - In the implementation block
@property(nonatomic, copy, readonly) NSString *title;     //@synthesize title=_title - In the implementation block
@property(nonatomic, copy, readonly) NSString *subtitle;  //@synthesize subtitle=_subtitle - In the implementation block
@property(nonatomic, copy, readonly) NSString *message;
@end

@interface NCNotificationRequest : NSObject
@property(nonatomic, copy, readonly) NSString *sectionIdentifier;       //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property(nonatomic, copy, readonly) NSString *notificationIdentifier;  //@synthesize notificationIdentifier=_notificationIdentifier - In the implementation block
@property(nonatomic, copy, readonly) NSString *threadIdentifier;        //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property(nonatomic, retain) NCNotificationContent *content;
@property(nonatomic, retain) UNNotification *userNotification;
@end

@interface CNNotification : NSObject
@property(nonatomic, copy) NSString *applicationIdentifier;
@property(nonatomic, retain) NSDictionary *notificationInfo;
@property(nonatomic, retain) NCNotificationContent *content;
@property(nonatomic, retain) UNNotificationContent *userNotificationContent;
@property(nonatomic, retain) NCNotificationRequest *request;
@end