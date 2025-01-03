/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDMultiUserState : SISchemaInstrumentationMessage {
    NSArray * _enrolledUsers;
    bool  _hasMultiUserSetupStatus;
    ODDSiriSchemaODDMultiUserSetupStatus * _multiUserSetupStatus;
}

@property (nonatomic, copy) NSArray *enrolledUsers;
@property (nonatomic) bool hasMultiUserSetupStatus;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ODDSiriSchemaODDMultiUserSetupStatus *multiUserSetupStatus;

- (void).cxx_destruct;
- (void)addEnrolledUsers:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearEnrolledUsers;
- (void)deleteEnrolledUsers;
- (void)deleteMultiUserSetupStatus;
- (id)dictionaryRepresentation;
- (id)enrolledUsers;
- (id)enrolledUsersAtIndex:(unsigned long long)arg1;
- (unsigned long long)enrolledUsersCount;
- (bool)hasMultiUserSetupStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)multiUserSetupStatus;
- (bool)readFrom:(id)arg1;
- (void)setEnrolledUsers:(id)arg1;
- (void)setHasMultiUserSetupStatus:(bool)arg1;
- (void)setMultiUserSetupStatus:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
