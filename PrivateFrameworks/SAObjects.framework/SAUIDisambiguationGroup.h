/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDisambiguationGroup : SAAceView <AFDisambiguationAssistancePrivate, SAAceSerializable>

@property (nonatomic, readonly) NSData *af_disambiguationIdentifier;
@property (setter=af_setDisambiguationInfo:, nonatomic, retain) AFDisambiguationInfo *af_disambiguationInfo;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *disambiguationLists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)disambiguationGroup;
+ (id)disambiguationGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)disambiguationLists;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDisambiguationLists:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_assistedSelectionItem;
- (id)af_disambiguationIdentifier;
- (id)af_disambiguationInfo;
- (id)af_indexIdentifierForItem:(id)arg1;
- (id)af_itemForIndexIdentifier:(id)arg1;
- (void)af_saveItemSelection:(id)arg1 forType:(long long)arg2;
- (void)af_setDisambiguationInfo:(id)arg1;

@end
