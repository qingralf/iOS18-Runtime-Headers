/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKContactDataSource : NSObject {
    NSDictionary * _contactLookup;
    NSArray * _contacts;
    CNContactStore * _store;
}

@property (nonatomic, retain) NSDictionary *contactLookup;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, retain) CNContactStore *store;

- (void).cxx_destruct;
- (id)contactLookup;
- (id)contacts;
- (id)fetchContactWithID:(id)arg1;
- (id)fullContactWithIdentifier:(id)arg1;
- (id)init;
- (id)keysToFetch;
- (void)loadContactsWithHandler:(id /* block */)arg1;
- (void)setContactLookup:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
