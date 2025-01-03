/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDialogButton : NSObject <SSXPCCoding> {
    int  _actionType;
    NSDictionary * _dictionary;
    id  _parameter;
    NSString * _subtarget;
    long long  _tag;
    bool  _tidContinue;
    NSString * _title;
    long long  _urlType;
}

@property int actionType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (retain) id parameter;
@property (readonly) bool shouldContinueTouchIDSession;
@property (copy) NSString *subtarget;
@property (readonly) Class superclass;
@property long long tag;
@property (retain) NSString *title;
@property long long urlType;

+ (id)buttonWithTitle:(id)arg1;

- (void).cxx_destruct;
- (int)_actionTypeForString:(id)arg1;
- (void)_openURLWithRequest:(id)arg1;
- (long long)_urlTypeForString:(id)arg1;
- (int)actionType;
- (id)copyXPCEncoding;
- (id)dictionary;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1 superficial:(bool)arg2;
- (void)loadFromDictionary:(id)arg1;
- (id)parameter;
- (void)performDefaultActionForDialog:(id)arg1;
- (void)setActionType:(int)arg1;
- (void)setActionTypeWithString:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setParameter:(id)arg1;
- (void)setSubtarget:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrlType:(long long)arg1;
- (bool)shouldContinueTouchIDSession;
- (id)subtarget;
- (long long)tag;
- (id)title;
- (long long)urlType;

@end
