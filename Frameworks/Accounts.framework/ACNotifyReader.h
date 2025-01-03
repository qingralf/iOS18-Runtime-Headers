/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACNotifyReader : NSObject <ACNotifyReading> {
    unsigned long long  _cachedValue;
    int  _dispatchToken;
    NSString * _key;
    int  _notifierToken;
}

@property (nonatomic) unsigned long long cachedValue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *key;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)cachedValue;
- (unsigned long long)currentValue;
- (void)dealloc;
- (id)initWithKey:(id)arg1 updateQueue:(id)arg2 updateBlock:(id /* block */)arg3;
- (id)key;
- (void)setCachedValue:(unsigned long long)arg1;
- (void)setKey:(id)arg1;

@end
