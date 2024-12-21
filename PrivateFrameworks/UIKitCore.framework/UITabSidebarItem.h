/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITabSidebarItem : NSObject <NSCopying> {
    NSArray * _accessories;
    UIAction * _action;
    UIBackgroundConfiguration * _backgroundConfiguration;
    UICellConfigurationState * _configurationState;
    <UIContentConfiguration> * _contentConfiguration;
    UIBackgroundConfiguration * _defaultBackgroundConfiguration;
    UIListContentConfiguration * _defaultContentConfiguration;
    UITab * _tab;
}

@property (nonatomic, readonly) _UITab *_tab;
@property (nonatomic, copy) NSArray *accessories;
@property (nonatomic, readonly) UIAction *action;
@property (nonatomic, copy) UIBackgroundConfiguration *backgroundConfiguration;
@property (nonatomic, retain) UICellConfigurationState *configurationState;
@property (nonatomic, copy) <UIContentConfiguration> *contentConfiguration;
@property (nonatomic, readonly) UITab *tab;

+ (id)itemFromRequest:(id)arg1;

- (void).cxx_destruct;
- (id)_accessories;
- (id)_backgroundConfiguration;
- (id)_configurationState;
- (id)_contentConfiguration;
- (id)_defaultBackgroundConfiguration;
- (id)_defaultContentConfiguration;
- (id)_initWithItem:(id)arg1;
- (id)_initWithRequest:(id)arg1;
- (id)_resolvedAccessories;
- (void)_setAccessories:(id)arg1;
- (void)_setBackgroundConfiguration:(id)arg1;
- (void)_setContentConfiguration:(id)arg1;
- (id)_tab;
- (id)accessories;
- (id)action;
- (id)backgroundConfiguration;
- (id)configurationState;
- (id)contentConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultBackgroundConfiguration;
- (id)defaultContentConfiguration;
- (bool)isEqual:(id)arg1;
- (void)setAccessories:(id)arg1;
- (void)setBackgroundConfiguration:(id)arg1;
- (void)setConfigurationState:(id)arg1;
- (void)setContentConfiguration:(id)arg1;
- (id)tab;

@end