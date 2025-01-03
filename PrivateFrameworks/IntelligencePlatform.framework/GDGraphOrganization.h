/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDGraphOrganization : NSObject <GDGraphObject> {
    NSArray * _allName;
    NSArray * _allPhoneticName;
    GDGraphOrganizationEntityIdentifier * _entityIdentifier;
    NSString * _name;
    NSString * _phoneticName;
}

@property (nonatomic, readonly, copy) NSArray *allName;
@property (nonatomic, readonly, copy) NSArray *allPhoneticName;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphOrganizationEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *phoneticName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allName;
- (id)allPhoneticName;
- (id)entityIdentifier;
- (Class)graphObjectType;
- (id)initWithEntityIdentifierField:(id)arg1 nameField:(id)arg2 phoneticNameField:(id)arg3 allNameField:(id)arg4 allPhoneticNameField:(id)arg5;
- (id)name;
- (id)phoneticName;

@end
