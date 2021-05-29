# ContacyAvatarProvider

## Usage
- copy iphone_Contacy_avatar_provider.nic.tar to $THEOS/template/ios/iphone/
- ```$THEOS/bin/nic.pl``` and choose Contacy_avatar_provider

To create your own avatar provider, you need to the app name and application identifier. Your provider will inherit from ```CNContactAvatarProvider```. You can overwrite ```-[CNContactAvatarProvider fetchAvatarForContactNotification:(CNNotification *)]``` to get avatar image from ```CNNotification```

## Class
### CNNotification
```objc
@interface CNNotification : NSObject
@property(nonatomic, copy) NSString *applicationIdentifier;
@property(nonatomic, retain) NSDictionary *notificationInfo;
@property(nonatomic, retain) NCNotificationContent *content;
@property(nonatomic, retain) UNNotificationContent *userNotificationContent;
@property(nonatomic, retain) NCNotificationRequest *request;
@end
```
- ```applicationIdentifier``` is the identifier of the app which send notification.
- ```notificationInfo``` contains basic user info of this notification which is sent by app. It's actually a property of ```UNNotification```.
- ```request``` is the request which is used to create notificaion.

### CNContactAvatarProvider
You can create a subclass of it to get avatar from notification
- ```-[CNContactAvatarProvider fetchAvatarForContactNotification:(CNNotification *)]``` you can overwrite this method to fetch the avatar for a notification.
- ```+[CNContactAvatarProvider sendRequestWithURL:(NSURL *)]``` if you need to get response from a url, please use this method.
