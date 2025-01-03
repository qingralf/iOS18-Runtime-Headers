/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

@interface IdentityLookup.LiveLookupDBExtension : NSManagedObject

@property (nonatomic, retain) NSSet *blockingInfo;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *identityInfo;
@property (nonatomic) bool isAppStoreVendable;
@property (nonatomic) bool isEnabled;
@property (nonatomic) bool isInstalled;
@property (nonatomic) short priority;
@property (nonatomic) bool shouldRemove;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
