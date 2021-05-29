#include "SampleAppAvatarProvider.h"

@implementation SampleAppAvatarProvider

- (UIImage *)fetchAvatarForContactNotification:(CNNotification *)notification {
	// please fetch the avatar here

	/*
		if you need to fetch data from a url:

		NSURL *url = [NSURL URLWithString:string];
		NSData *data = [CNContactAvatarProvider sendRequestWithURL:url];
		UIImage *image = [UIImage imageWithData:data];

		this method, -[Provider fetchAvatarForContactNotification:] will be called in a background thread asynchronously.
	*/
	return nil;
}

@end
