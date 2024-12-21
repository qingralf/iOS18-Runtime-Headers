/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUKnowledgeEntity : NSObject {
    NSString * _QID;
    NSString * _humanReadableLabel;
    NSSet * _humanReadableSynonyms;
    int  _version;
}

@property (nonatomic, readonly, copy) NSString *QID;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) NSString *humanReadableLabel;
@property (nonatomic, readonly, copy) NSSet *humanReadableSynonyms;
@property (nonatomic, readonly) int version;

- (void).cxx_destruct;
- (id)QID;
- (id)dictionary;
- (id)humanReadableLabel;
- (id)humanReadableSynonyms;
- (id)initWithDictionary:(id)arg1;
- (id)initWithQID:(id)arg1 withHumanReadableLabel:(id)arg2 withHumanReadableSynonyms:(id)arg3 withVersion:(int)arg4;
- (int)version;

@end