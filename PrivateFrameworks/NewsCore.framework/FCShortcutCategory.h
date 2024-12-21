/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCShortcutCategory : NSObject {
    NSDate * _dateAdded;
    NSString * _identifier;
    unsigned long long  _status;
    unsigned long long  _type;
}

@property (nonatomic, readonly) CKRecord *asCKRecord;
@property (nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)asCKRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateAdded;
- (id)identifier;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 dateAdded:(id)arg3 status:(unsigned long long)arg4;
- (unsigned long long)status;
- (unsigned long long)type;

@end