/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface _EDDisplayNameGroupingTrieNode : NSObject {
    NSMutableArray * _addressIDs;
    NSMutableDictionary * _children;
    bool  _isEndOfName;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSArray *addressIDs;
@property (nonatomic, readonly, copy) NSDictionary *children;
@property (nonatomic) bool isEndOfName;
@property (nonatomic, readonly, copy) NSString *value;

- (void).cxx_destruct;
- (void)addAddressID:(id)arg1;
- (void)addChild:(id)arg1;
- (id)addressIDs;
- (id)children;
- (id)initWithValue:(id)arg1;
- (bool)isEndOfName;
- (void)setIsEndOfName:(bool)arg1;
- (id)value;

@end