/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKHomeWidgetItem : NSObject <NTKComplicationItem> {
    NSString * _localizedName;
    NSString * _ntk_identifier;
    NSString * _ntk_sectionIdentifier;
    NTKWidgetComplication * _widgetComplication;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, readonly) NSString *ntk_contactIdentifier;
@property (nonatomic, readonly) NSString *ntk_identifier;
@property (nonatomic, readonly) unsigned long long ntk_itemType;
@property (nonatomic, readonly) NSString *ntk_sectionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKWidgetComplication *widgetComplication;

- (void).cxx_destruct;
- (id)initWithSectionIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)ntk_contactIdentifier;
- (id)ntk_identifier;
- (unsigned long long)ntk_itemType;
- (id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(bool)arg2;
- (id)ntk_sectionIdentifier;
- (void)setLocalizedName:(id)arg1;
- (void)setWidgetComplication:(id)arg1;
- (id)widgetComplication;

@end
