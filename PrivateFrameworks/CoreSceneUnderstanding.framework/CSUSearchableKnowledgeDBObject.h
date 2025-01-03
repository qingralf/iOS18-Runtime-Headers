/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUSearchableKnowledgeDBObject : NSManagedObject

@property (nonatomic, copy) NSString *category;
@property (nonatomic) double confidenceValue;
@property (nonatomic) long long dbUniqueId;
@property (nonatomic) short idType;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSString *localizedLabel;
@property (nonatomic, copy) NSString *localizedLabelDictionary;
@property (nonatomic, copy) NSString *localizedSynonyms;
@property (nonatomic, copy) NSString *localizedSynonymsDictionary;
@property (nonatomic) double longitude;
@property (nonatomic) long long qid;
@property (nonatomic) bool sensitiveLocation;
@property (nonatomic) int version;
@property (nonatomic, copy) NSString *vertical;

+ (id)fetchRequest;
+ (unsigned long long)getUniqueDbId:(unsigned long long)arg1 idType:(short)arg2;
+ (unsigned long long)getUniqueDbId:(unsigned long long)arg1 idType:(short)arg2 locale:(id)arg3;

- (bool)convertToEntity:(id*)arg1 error:(id*)arg2;
- (void)copyFromEntity:(id)arg1;

@end
