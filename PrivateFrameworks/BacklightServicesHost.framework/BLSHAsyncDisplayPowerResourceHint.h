/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost
 */

@interface BLSHAsyncDisplayPowerResourceHint : NSObject <BLSDisplayPowerResourceHint> {
    <BLSDisplayPowerResourceHint> * _hint;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)hintWithHint:(id)arg1;
+ (id)sharedHighPriorityQueue;

- (void).cxx_destruct;
- (id)initWithHint:(id)arg1;
- (bool)updateState:(unsigned long long)arg1;

@end
