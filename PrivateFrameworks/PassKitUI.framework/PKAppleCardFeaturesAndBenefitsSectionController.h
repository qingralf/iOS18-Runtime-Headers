/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAppleCardFeaturesAndBenefitsSectionController : PKPaymentPassDetailSectionController {
    void exploreFeaturesAndBenefitsSectionID;
    void selectionHandler;
}

@property (nonatomic, readonly) NSArray *allSectionIdentifiers;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;
@property (nonatomic, copy) id /* block */ selectionHandler;

- (void).cxx_destruct;
- (id)allSectionIdentifiers;
- (id)init;
- (id)sectionIdentifiers;
- (id /* block */)selectionHandler;
- (void)setSelectionHandler:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;

@end