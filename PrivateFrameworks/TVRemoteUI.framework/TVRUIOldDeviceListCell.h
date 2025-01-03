/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRUIOldDeviceListCell : UITableViewCell {
    <TVRUIDevice> * _device;
    UIView * _separator;
    bool  _showSeparator;
    <TVRUIStyleProvider> * _styleProvider;
}

@property (nonatomic, retain) <TVRUIDevice> *device;
@property (nonatomic, retain) UIView *separator;
@property (nonatomic) bool showSeparator;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;

- (void).cxx_destruct;
- (void)_applyFilterForDevice:(id)arg1;
- (id)device;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)separator;
- (void)setDevice:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setShowSeparator:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (bool)showSeparator;
- (id)styleProvider;

@end
