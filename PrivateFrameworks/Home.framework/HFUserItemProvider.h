/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUserItemProvider : HFItemProvider {
    id /* block */  _filter;
    HMHome * _home;
    bool  _includeCurrentUser;
    bool  _includeGuestUsers;
    bool  _includeOtherUsers;
    unsigned long long  _nameStyle;
    NSMutableSet * _userItems;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) bool includeCurrentUser;
@property (nonatomic) bool includeGuestUsers;
@property (nonatomic) bool includeOtherUsers;
@property (nonatomic) unsigned long long nameStyle;
@property (nonatomic, retain) NSMutableSet *userItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)home;
- (bool)includeCurrentUser;
- (bool)includeGuestUsers;
- (bool)includeOtherUsers;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (unsigned long long)nameStyle;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setIncludeCurrentUser:(bool)arg1;
- (void)setIncludeGuestUsers:(bool)arg1;
- (void)setIncludeOtherUsers:(bool)arg1;
- (void)setNameStyle:(unsigned long long)arg1;
- (void)setUserItems:(id)arg1;
- (id)userItems;

@end
