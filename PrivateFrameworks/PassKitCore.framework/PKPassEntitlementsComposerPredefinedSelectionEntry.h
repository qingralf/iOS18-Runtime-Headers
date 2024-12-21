/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassEntitlementsComposerPredefinedSelectionEntry : NSObject <PKIdentifiable> {
    NSArray * _entries;
    PKPassEntitlementsComposer * _parentEntitlementComposer;
    PKPredefinedSharedEntitlementSelection * _predefinedSelection;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *entries;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, retain) PKPredefinedSharedEntitlementSelection *predefinedSelection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)entries;
- (id)identifier;
- (id)init;
- (id)predefinedSelection;
- (void)setEntries:(id)arg1;
- (void)setPredefinedSelection:(id)arg1;

@end