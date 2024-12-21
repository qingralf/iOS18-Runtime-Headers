/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactCardFieldPickerDataSource : NSObject <UITableViewDataSource> {
    NSArray * _contacts;
    NSArray * _hiddenProperties;
    NSArray * _sections;
}

@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *hiddenProperties;
@property (nonatomic, readonly) NSArray *sections;
@property (readonly) Class superclass;

+ (bool)canSharePronounsForContacts:(id)arg1;
+ (bool)isSharingMeContactForContacts:(id)arg1;
+ (id)shareableNamePropertiesForContact:(id)arg1;

- (void).cxx_destruct;
- (id)_loadSections;
- (id)_loadSectionsForContacts;
- (id)contacts;
- (id)firstContactContainingPhoto;
- (id)groupItemForIndexPath:(id)arg1;
- (bool)hasPhotoForContact:(id)arg1;
- (id)hiddenProperties;
- (id)initWithContact:(id)arg1;
- (id)initWithContacts:(id)arg1;
- (id)initWithContacts:(id)arg1 hiddenProperties:(id)arg2;
- (bool)isFieldHidden:(id)arg1;
- (id)itemsForKey:(id)arg1 forContact:(id)arg2;
- (id)itemsForKey:(id)arg1 forContacts:(id)arg2;
- (id)keyForIndexPath:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sections;
- (void)setContacts:(id)arg1;
- (void)setHiddenProperties:(id)arg1;
- (id)shareableCardProperties;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)totalItemCount;

@end