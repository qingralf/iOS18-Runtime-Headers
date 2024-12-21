/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFPrivacyReportOverviewView : SFPrivacyReportGridView {
    long long  _contextType;
    SFPrivacyReportOverviewCellContentView * _mostBlockedTrackerView;
    <WBSPrivacyReportDataProvider> * _reportDataProvider;
    SFPrivacyReportOverviewCellContentView * _trackersPreventedFromProfilingView;
    bool  _usesInsetStyle;
    SFPrivacyReportOverviewCellContentView * _websitesContainingTrackersView;
}

@property (nonatomic) long long contextType;
@property (nonatomic) bool usesInsetStyle;

- (void).cxx_destruct;
- (id)cellBackgroundColor;
- (double)cellBackgroundCornerRadius;
- (long long)contextType;
- (id)initWithPrivacyReportDataProvider:(id)arg1;
- (double)interItemSpacing;
- (bool)itemViewCanUseCompactWidth:(id)arg1;
- (bool)itemViewIsLineBreak:(id)arg1;
- (void)setContextType:(long long)arg1;
- (void)setItemViews:(id)arg1;
- (void)setUsesInsetStyle:(bool)arg1;
- (void)updateItemBackgroundProperties;
- (bool)usesInsetStyle;

@end