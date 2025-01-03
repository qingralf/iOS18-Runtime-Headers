/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget
 */

@interface APUIAppIconGridLayoutProvider : NSObject <SBIconListLayoutProvider> {
    bool  _largeIconsEnabled;
    unsigned long long  _mode;
}

@property (getter=isLargeIconsEnabled, nonatomic, readonly) bool largeIconsEnabled;
@property (nonatomic) unsigned long long mode;

- (id)initWithLargeIconsEnabled:(bool)arg1;
- (bool)isLargeIconsEnabled;
- (id)layoutForIconLocation:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;

@end
