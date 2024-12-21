/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation
 */

@interface APSettingsStorageFile : NSObject <APSettingsStorableProtocol> {
    APUnfairLock * _accessLock;
    NSDictionary * _defaults;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) APUnfairLock *accessLock;
@property (nonatomic, readonly) NSDictionary *defaults;
@property (nonatomic, retain) NSMutableDictionary *storage;

- (void).cxx_destruct;
- (id)_filePathWithName:(id)arg1;
- (void)_readFileIfNecessaryUsingKey:(id)arg1;
- (void)_writeFileUsingKey:(id)arg1;
- (id)accessLock;
- (id)defaults;
- (id)initWithDefaultValues:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)storage;
- (void)synchronize;
- (id)valueForKey:(id)arg1;
- (id)valueForKey:(id)arg1 error:(id*)arg2;

@end