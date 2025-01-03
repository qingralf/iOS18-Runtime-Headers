/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUSearchableKnowledgeObject : NSObject {
    NSString * _category;
    double  _confidenceValue;
    short  _idType;
    double  _latitude;
    NSString * _localizedLabel;
    NSMutableDictionary * _localizedLabelDictionary;
    NSMutableDictionary * _localizedSynonyms;
    NSMutableDictionary * _localizedSynonymsDictionary;
    double  _longitude;
    unsigned long long  _qid;
    bool  _sensitiveLocation;
    int  _version;
    NSString * _vertical;
}

@property (nonatomic, readonly, copy) NSString *category;
@property (nonatomic, readonly) double confidenceValue;
@property (nonatomic, readonly) short idType;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly, copy) NSString *localizedLabel;
@property (nonatomic, readonly, copy) NSMutableDictionary *localizedLabelDictionary;
@property (nonatomic, readonly, copy) NSMutableDictionary *localizedSynonyms;
@property (nonatomic, readonly, copy) NSMutableDictionary *localizedSynonymsDictionary;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) unsigned long long qid;
@property (nonatomic, readonly) bool sensitiveLocation;
@property (nonatomic, readonly) int version;
@property (nonatomic, readonly, copy) NSString *vertical;

+ (bool)labelDictionaryFromString:(id)arg1 directoryWriteBack:(id*)arg2 error:(id*)arg3;
+ (id)searchDictionary:(id)arg1 withLocale:(id)arg2;
+ (id)stringFromLabelDictionary:(id)arg1;
+ (id)stringFromSynonymsDictionary:(id)arg1;
+ (bool)synonymsDictionaryFromLocaleString:(id)arg1 directoryWriteBack:(id*)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)category;
- (double)confidenceValue;
- (short)idType;
- (id)initWithQID:(unsigned long long)arg1 idType:(short)arg2 localizedLabel:(id)arg3 confidence:(double)arg4 sensitiveLation:(bool)arg5 category:(id)arg6 vertical:(id)arg7 localizedSynonyms:(id)arg8 longitude:(double)arg9 latitute:(double)arg10 version:(int)arg11 locale:(id)arg12;
- (id)initWithQID:(unsigned long long)arg1 idType:(short)arg2 localizedLabel:(id)arg3 confidence:(double)arg4 sensitiveLocation:(bool)arg5 category:(id)arg6 vertical:(id)arg7 localizedSynonyms:(id)arg8 longitude:(double)arg9 latitute:(double)arg10 version:(int)arg11;
- (id)initWithQID:(unsigned long long)arg1 idType:(short)arg2 localizedLabelDictionary:(id)arg3 confidence:(double)arg4 sensitiveLocation:(bool)arg5 category:(id)arg6 vertical:(id)arg7 localizedSynonymsDictionary:(id)arg8 longitude:(double)arg9 latitude:(double)arg10 version:(int)arg11;
- (double)latitude;
- (id)localizedLabel;
- (id)localizedLabelDictionary;
- (id)localizedLabelWithLocale:(id)arg1;
- (id)localizedSynonyms;
- (id)localizedSynonymsDictionary;
- (id)localizedSynonymsWithLocale:(id)arg1;
- (double)longitude;
- (unsigned long long)qid;
- (bool)sensitiveLocation;
- (void)setLocalizedLabel:(id)arg1 forLocale:(id)arg2;
- (void)setLocalizedSynonyms:(id)arg1 forLocale:(id)arg2;
- (int)version;
- (id)vertical;

@end
