/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
 */

@interface APAMSClientBagManager : NSObject <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)adprivacydBag;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (void)isDisabledAdsPrefetch:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (bool)isSubsequentAdsFetchDisabled;
+ (void)isSubsequentAdsFetchDisabled:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
