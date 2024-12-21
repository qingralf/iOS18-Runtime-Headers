/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CAFCombine.framework/CAFCombine
 */

@interface CAFCombine.CAFSettingsSectionObservable : NSObject <CAFSettingsSectionObserver> {
    void _identifier;
    void _name;
    void _sortOrder;
    void _userVisibleFooter;
    void _userVisibleSectionName;
    void cachedDescription;
    void cachedDescriptionLock;
    void observed;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)serviceDidFinishGroupUpdate:(id)arg1;
- (void)serviceDidUpdate:(id)arg1 characteristic:(id)arg2 fromGroupUpdate:(bool)arg3;
- (void)serviceDidUpdate:(id)arg1 receivedAllValues:(bool)arg2;
- (void)settingsSectionService:(id)arg1 didUpdateIdentifier:(id)arg2;
- (void)settingsSectionService:(id)arg1 didUpdateName:(id)arg2;
- (void)settingsSectionService:(id)arg1 didUpdateSortOrder:(unsigned char)arg2;
- (void)settingsSectionService:(id)arg1 didUpdateUserVisibleFooter:(id)arg2;
- (void)settingsSectionService:(id)arg1 didUpdateUserVisibleSectionName:(id)arg2;

@end