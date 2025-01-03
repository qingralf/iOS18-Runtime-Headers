/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactDiff : NSObject {
    NSArray * _updates;
}

@property (readonly, copy) NSArray *updates;

+ (id)diffContact:(id)arg1 to:(id)arg2 error:(id*)arg3;
+ (id)diffContact:(id)arg1 to:(id)arg2 options:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)applyToABPerson:(void*)arg1 isUnified:(bool)arg2 logger:(id)arg3 error:(id*)arg4;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2;
- (id)contactByApplyingUpdatesToContact:(id)arg1;
- (id)description;
- (id)initWithUpdates:(id)arg1;
- (id)updates;

@end
