/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
 */

@interface PodcastsFoundation.PushSubscriptionRequest : NSObject {
    void action;
    void apnsToken;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  endpointURL;
}

@property (nonatomic, readonly) NSDictionary *parameters;

- (void).cxx_destruct;
- (id)buildURLRequestAndReturnError:(id*)arg1;
- (id)init;
- (id)initWithEndpointURL:(id)arg1 action:(id)arg2 apnsToken:(id)arg3;
- (id)parameters;

@end
