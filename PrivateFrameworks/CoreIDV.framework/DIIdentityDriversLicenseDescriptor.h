/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

@interface DIIdentityDriversLicenseDescriptor : NSObject <DIIdentityDocumentDescriptor> {
    NSMutableDictionary * _elementsToIntentToStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addElements:(id)arg1 withIntentToStore:(id)arg2;
- (id)description;
- (id)elements;
- (id)elementsToIntentToStore;
- (id)init;
- (id)intentToStoreForElement:(id)arg1;
- (void)setElementsToIntentToStore:(id)arg1;

@end