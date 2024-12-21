/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactPosterFetchRequest : NSObject <CNContactPosterRequest> {
    NSArray * _contactIdentifiers;
}

@property (nonatomic, retain) NSArray *contactIdentifiers;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSPersistentStoreRequest *persistentStoreRequest;
@property (readonly) Class superclass;

+ (id)predicateForPostersMatchingContactIdentifiers:(id)arg1;
+ (id)recentPostersRequestForContactIdenfitiers:(id)arg1;

- (void).cxx_destruct;
- (id)contactIdentifiers;
- (id)initWithContactIdentifiers:(id)arg1;
- (id)persistentStoreRequest;
- (void)setContactIdentifiers:(id)arg1;

@end