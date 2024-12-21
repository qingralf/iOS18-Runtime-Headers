/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFBrowsingAssistantMenuSection : NSObject {
    void identifier;
    void items;
    void settings;
    void title;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSArray *settings;
@property (nonatomic, copy) NSString *title;

+ (id)favoritesSection;
+ (id)moreMenuSections;
+ (id)websiteSettingsSectionForDomain:(id)arg1;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)items;
- (void)setIdentifier:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)settings;
- (id)title;

@end