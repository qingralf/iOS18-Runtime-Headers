/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyLog : NSObject <NSCopying, TITraceLogParsingDelegate, TITypologyLogPersisting, TITypologyLogProviding, TITypologyLogging> {
    NSString * _buildVersion;
    NSString * _clientIdentifier;
    NSDictionary * _config;
    NSDate * _date;
    <TITypologyLogDelegate> * _delegate;
    TIKeyboardState * _lastKeyboardState;
    NSMutableSet * _loggedRecordClasses;
    unsigned long long  _partIndex;
    TIRollingLog * _records;
    NSString * _systemVersion;
    unsigned long long  _traceLogVersion;
    TIRollingLog * _traceRecords;
    unsigned long long  _typologyLogVersion;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, retain) NSDictionary *config;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic) <TITypologyLogDelegate> *delegate;
@property (nonatomic, retain) TIKeyboardState *lastKeyboardState;
@property (nonatomic, retain) NSMutableSet *loggedRecordClasses;
@property (nonatomic, readonly) unsigned long long maxNumRecords;
@property (nonatomic, readonly) unsigned long long numTraceRecords;
@property (nonatomic, readonly) unsigned long long numTypologyRecords;
@property (nonatomic, readonly) unsigned long long partIndex;
@property (nonatomic, readonly) NSString *recommendedTraceLogFilename;
@property (nonatomic, readonly) NSString *recommendedTypologyLogFilename;
@property (nonatomic, readonly) TIRollingLog *records;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) unsigned long long traceLogVersion;
@property (nonatomic, readonly) TIRollingLog *traceRecords;
@property (nonatomic, readonly) unsigned long long typologyLogVersion;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)_adjustFilename:(id)arg1 oldPrefix:(id)arg2 newPrefix:(id)arg3 oldSuffix:(id)arg4 newSuffix:(id)arg5;
+ (bool)isTraceLogFilename:(id)arg1;
+ (bool)isTypologyLogFilename:(id)arg1;
+ (id)traceLogFilenameFromTypologyLogFilename:(id)arg1;
+ (id)traceLogURLFromTypologyLogURL:(id)arg1;
+ (id)typologyLogFilenameFromTraceLogFilename:(id)arg1;
+ (id)typologyLogFromTypologyLogFile:(id)arg1 andTraceLogFile:(id)arg2 error:(id*)arg3;
+ (id)typologyLogURLFromTraceLogURL:(id)arg1;

- (void).cxx_destruct;
- (void)_logRecord:(id)arg1 trace:(id)arg2;
- (id)_recommendedFilenameWithPrefix:(id)arg1 andSuffix:(id)arg2;
- (bool)_writeToTraceLogFile:(id)arg1 error:(id*)arg2;
- (bool)_writeToTypologyLogFile:(id)arg1 withAccessibilityInfo:(id)arg2 includeTraceLogContent:(bool)arg3 error:(id*)arg4;
- (id)buildVersion;
- (id)clientIdentifier;
- (id)config;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)delegate;
- (void)enumerateParsedTraceRecordsWithBlock:(id /* block */)arg1;
- (void)enumerateParsedTraceRecordsWithBlockIncludingStop:(id /* block */)arg1;
- (void)enumerateRecordsWithBlock:(id /* block */)arg1;
- (void)enumerateTraceRecordsWithBlock:(id /* block */)arg1;
- (void)enumerateTraceRecordsWithBlockIncludingStop:(id /* block */)arg1;
- (void)enumerateTypologyRecordsWithBlock:(id /* block */)arg1;
- (void)enumerateTypologyRecordsWithBlockIncludingStop:(id /* block */)arg1;
- (id)fileCreationOptions;
- (id)filename;
- (id)init;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithTypologyLog:(id)arg1;
- (id)initWithUUID:(id)arg1 partIndex:(unsigned long long)arg2 date:(id)arg3 systemVersion:(id)arg4 buildVersion:(id)arg5 clientIdentifier:(id)arg6 config:(id)arg7;
- (id)lastKeyboardState;
- (void)logRecord:(id)arg1;
- (void)logRecord:(id)arg1 trace:(id)arg2;
- (id)loggedRecordClasses;
- (bool)loggedRecordOfClass:(Class)arg1;
- (unsigned long long)maxNumRecords;
- (unsigned long long)numTraceRecords;
- (unsigned long long)numTypologyRecords;
- (void)parseTraceLogContent:(id)arg1;
- (id)parsedTraceRecordMatchingUUID:(id)arg1;
- (unsigned long long)partIndex;
- (id)propertyList;
- (id)propertyListWithTrace;
- (id)recommendedTraceLogFilename;
- (id)recommendedTypologyLogFilename;
- (id)recordSummary;
- (id)records;
- (void)setClientIdentifier:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastKeyboardState:(id)arg1;
- (void)setLoggedRecordClasses:(id)arg1;
- (id)systemVersion;
- (id)textSummary;
- (id)timestamp;
- (id)trace;
- (void)traceHeaderParsed:(id)arg1;
- (id)traceLogHeader;
- (unsigned long long)traceLogVersion;
- (id)traceRecordMatchingUUID:(id)arg1;
- (void)traceRecordParsed:(id)arg1;
- (id)traceRecords;
- (unsigned long long)typologyLogVersion;
- (id)typologyRecordMatchingUUID:(id)arg1;
- (id)typologyRecordUUIDsIncludedInRange:(id)arg1 endUUID:(id)arg2;
- (id)typologyRecordsMatchingUUIDRange:(id)arg1 endUUID:(id)arg2;
- (id)uuid;
- (bool)writeToTypologyLogFile:(id)arg1 andTraceLogFile:(id)arg2 withAccessibilityInfo:(id)arg3 error:(id*)arg4;

@end
