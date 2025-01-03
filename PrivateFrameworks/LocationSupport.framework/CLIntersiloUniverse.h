/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
 */

@interface CLIntersiloUniverse : NSObject <CLIntersiloUniverse> {
    CLSilo * _silo;
    CLServiceVendor * _vendor;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLSilo *silo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CLServiceVendor *vendor;

+ (id)newIsolatedUniverseWithOnlySilo:(id)arg1;
+ (id)newSharedVendorUniverseWithSilo:(id)arg1;

- (void).cxx_destruct;
- (id)initWithSilo:(id)arg1 vendor:(id)arg2;
- (id)silo;
- (id)vendor;

@end
