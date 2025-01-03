/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIRFCardSectionRowModel : SearchUICardSectionRowModel {
    void _builderContext;
}

@property (nonatomic, readonly) bool fillsBackgroundWithContent;
@property (nonatomic, readonly) bool hasLeadingImage;
@property (nonatomic, readonly) double highlightReferenceFrameCornerRadius;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } intrinsicContentInset;
@property (nonatomic, readonly) bool prefersNoSeparatorAbove;
@property (nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic, readonly) int separatorStyle;
@property (nonatomic, readonly) bool supportsCustomHighlightBehavior;

+ (bool)shouldHideViewForCardSection:(id)arg1;
+ (bool)supportsConfigurationFor:(id)arg1;

- (void).cxx_destruct;
- (bool)fillsBackgroundWithContent;
- (bool)hasLeadingImage;
- (double)highlightReferenceFrameCornerRadius;
- (id)init;
- (id)initWithCardSection:(id)arg1 queryId:(unsigned long long)arg2 itemIdentifier:(id)arg3;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(bool)arg3 queryId:(unsigned long long)arg4 itemIdentifier:(id)arg5;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3 itemIdentifier:(id)arg4;
- (id)initWithResult:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithResults:(id)arg1 itemIdentifier:(id)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })intrinsicContentInset;
- (bool)prefersNoSeparatorAbove;
- (id)reuseIdentifier;
- (int)separatorStyle;
- (bool)supportsCustomHighlightBehavior;

@end
