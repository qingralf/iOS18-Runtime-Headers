/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSystemSettingsAppearanceSetup : BMEventBase <BMStoreData> {
    unsigned int  _childAge;
    NSString * _childChoice;
    bool  _childSetup;
    NSString * _choice;
    unsigned int  _dataVersion;
    bool  _hasChildAge;
    bool  _hasChildSetup;
}

@property (nonatomic, readonly) unsigned int childAge;
@property (nonatomic, readonly) NSString *childChoice;
@property (nonatomic, readonly) bool childSetup;
@property (nonatomic, readonly) NSString *choice;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasChildAge;
@property (nonatomic) bool hasChildSetup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)childAge;
- (id)childChoice;
- (bool)childSetup;
- (id)choice;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasChildAge;
- (bool)hasChildSetup;
- (id)initByReadFrom:(id)arg1;
- (id)initWithChoice:(id)arg1 childSetup:(id)arg2 childChoice:(id)arg3 childAge:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasChildAge:(bool)arg1;
- (void)setHasChildSetup:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
