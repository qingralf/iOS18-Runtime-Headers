/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMapsDefaultsAccessor : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    bool  _protectedDataAvailable;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)get:(id)arg1;
+ (void)set:(id)arg1 value:(id)arg2;
+ (id)sharedInstance;
+ (void)synchronize;

- (id)_get:(id)arg1;
- (void)_set:(id)arg1 value:(id)arg2;
- (void)_synchronize;
- (id)init;
- (void)protectedDataDidBecomeAvailable:(id)arg1;

@end