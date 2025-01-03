/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFRequest : NSObject <CAFCacheableDescription> {
    CAFCachedDescription * _cachedDescription;
    CAFCharacteristic * _characteristic;
    CAFControl * _control;
}

@property (nonatomic, readonly) CAFCachedDescription *cachedDescription;
@property (nonatomic, readonly) CAFCharacteristic *characteristic;
@property (nonatomic, readonly) CAFControl *control;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CAFRequestKey *requestKey;
@property (readonly) Class superclass;

+ (id)requestWithCharacteristic:(id)arg1;
+ (id)requestWithControl:(id)arg1;

- (void).cxx_destruct;
- (id)cachedDescription;
- (id)characteristic;
- (id)control;
- (id)currentDescriptionForCache:(id)arg1;
- (id)description;
- (id)initWithCharacteristic:(id)arg1;
- (id)initWithControl:(id)arg1;
- (id)requestKey;

@end
