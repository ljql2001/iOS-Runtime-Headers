/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CKDAccountInfoProvider>, <CKDResponseBodyParser>, CKDClientContext, CKDProtobufStreamWriter, CKDProtocolTranslator, NSArray, NSData, NSDate, NSDictionary, NSError, NSFileHandle, NSHTTPURLResponse, NSInputStream, NSMutableArray, NSMutableData, NSMutableDictionary, NSOperationQueue, NSRunLoop, NSString, NSURL, NSURLRequest, NSURLSessionConfiguration, NSURLSessionDataTask;

@interface CKDURLRequest : NSObject <CKDURLSessionTaskDelegate, CKDProtobufMessageSigningDelegate, CKDFlowControllable> {
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    <CKDAccountInfoProvider> *_accountInfoProvider;
    NSFileHandle *_binaryRequestFileHandle;
    NSString *_binaryRequestLogFilePath;
    NSFileHandle *_binaryResponseFileHandle;
    NSString *_binaryResponseLogFilePath;
    long long _cachedPartitionType;
    long long _cachedServerType;
    id _completionBlock;
    CKDClientContext *_context;
    long long _databaseScope;
    NSDate *_dateRequestWentOut;
    NSOperationQueue *_delegateQueue;
    NSString *_deviceID;
    NSError *_error;
    NSData *_fakeResponseData;
    NSString *_flowControlKey;
    NSString *_hardwareIDOverride;
    } _mescalRxSignature;
    } _mescalTxSignature;
    unsigned long long _numDownloadedElements;
    NSMutableDictionary *_overriddenHeaders;
    NSMutableData *_receivedMescalData;
    NSMutableArray *_redirectHistory;
    NSURLRequest *_request;
    NSFileHandle *_requestFileHandle;
    NSString *_requestLogFilePath;
    NSArray *_requestOperations;
    id _requestProgressBlock;
    NSDictionary *_requestProperties;
    NSString *_requestUUID;
    NSHTTPURLResponse *_response;
    <CKDResponseBodyParser> *_responseBodyParser;
    NSFileHandle *_responseFileHandle;
    NSString *_responseLogFilePath;
    id _responseProgressBlock;
    long long _responseStatusCode;
    NSRunLoop *_runLoopToFireOn;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    CKDProtobufStreamWriter *_streamWriter;
    double _timeoutInterval;
    CKDProtocolTranslator *_translator;
    NSURLSessionDataTask *_urlSessionTask;
    bool_allowAutomaticRedirects;
    bool_allowsCellularAccess;
    bool_cancelled;
    bool_didFinishLoading;
    bool_didRetryAuth;
    bool_didRetrySignature;
    bool_didSendRequest;
    bool_finished;
    bool_haveCachedPartitionType;
    bool_haveCachedServerType;
    bool_haveParsedFakeResponseData;
    bool_usesBackgroundSession;
}

@property(readonly) NSString * acceptContentType;
@property(retain) <CKDAccountInfoProvider> * accountInfoProvider;
@property(readonly) NSDictionary * additionalHeaderValues;
@property bool allowAutomaticRedirects;
@property bool allowsCellularAccess;
@property(retain) NSFileHandle * binaryRequestFileHandle;
@property(retain) NSString * binaryRequestLogFilePath;
@property(retain) NSFileHandle * binaryResponseFileHandle;
@property(retain) NSString * binaryResponseLogFilePath;
@property long long cachedPartitionType;
@property long long cachedServerType;
@property(getter=isCancelled) bool cancelled;
@property(copy) id completionBlock;
@property(retain) CKDClientContext * context;
@property long long databaseScope;
@property(retain) NSDate * dateRequestWentOut;
@property(copy,readonly) NSString * debugDescription;
@property(retain) NSOperationQueue * delegateQueue;
@property(copy,readonly) NSString * description;
@property(copy) NSString * deviceID;
@property(retain) NSError * error;
@property(retain) NSString * flowControlKey;
@property(retain) NSString * hardwareIDOverride;
@property(readonly) bool hasRequestBody;
@property(readonly) unsigned long long hash;
@property bool haveCachedPartitionType;
@property bool haveCachedServerType;
@property(readonly) NSString * httpMethod;
@property(readonly) bool isFinished;
@property(readonly) int isolationLevel;
@property(readonly) NSURL * lastRedirectURL;
@property unsigned long long numDownloadedElements;
@property(readonly) int operationType;
@property(readonly) long long partitionType;
@property(readonly) NSString * path;
@property(readonly) NSString * protobufOperationName;
@property(retain) NSURLRequest * request;
@property(readonly) NSInputStream * requestBodyStream;
@property(readonly) NSString * requestContentType;
@property(retain) NSFileHandle * requestFileHandle;
@property(retain) NSString * requestLogFilePath;
@property(readonly) NSArray * requestOperationClasses;
@property(readonly) NSArray * requestOperations;
@property(copy) id requestProgressBlock;
@property(retain) NSDictionary * requestProperties;
@property(readonly) NSString * requestUUID;
@property(retain) NSHTTPURLResponse * response;
@property(retain) <CKDResponseBodyParser> * responseBodyParser;
@property(retain) NSFileHandle * responseFileHandle;
@property(readonly) NSDictionary * responseHeaders;
@property(retain) NSString * responseLogFilePath;
@property(copy) id responseProgressBlock;
@property(readonly) long long responseStatusCode;
@property(readonly) NSString * sectionID;
@property(readonly) long long serverType;
@property(retain) NSURLSessionConfiguration * sessionConfiguration;
@property(readonly) bool shouldCompressBody;
@property(retain) NSString * sourceApplicationBundleIdentifier;
@property(retain) NSString * sourceApplicationSecondaryIdentifier;
@property(readonly) CKDProtobufStreamWriter * streamWriter;
@property(readonly) Class superclass;
@property double timeoutInterval;
@property(retain) CKDProtocolTranslator * translator;
@property(readonly) NSURL * url;
@property(retain) NSURLSessionDataTask * urlSessionTask;
@property bool usesBackgroundSession;

+ (id)_logQueue;
+ (id)_sharedCookieStorage;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)URLSessionDataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)URLSessionDataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3;
- (void)URLSessionTask:(id)arg1 conditionalRequirementsChanged:(bool)arg2;
- (void)URLSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSessionTask:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSessionTask:(id)arg1 needNewBodyStream:(id)arg2;
- (id)URLSessionTask:(id)arg1 requestForEstablishedConnection:(id)arg2;
- (void)URLSessionTask:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4;
- (void)URLSessionTaskIsWaitingForConnection:(id)arg1;
- (void)_acquireZoneGates;
- (void)_addRequestHeadersToTransmittedSignature:(id)arg1;
- (void)_addResponseHeadersToReceivedSignature:(id)arg1;
- (id)_binaryRequestFileHandle;
- (id)_binaryResponseFileHandle;
- (id)_errorFromHTTPResponse:(id)arg1;
- (void)_fetchContainerScopedUserID;
- (void)_fetchDeviceID;
- (void)_flushRequestResponseLogs;
- (void)_handleAuthFailure;
- (void)_handleBadPasswordResponse;
- (void)_handleMescalSignatureResponse:(id)arg1 withCompletionHandler:(id)arg2;
- (long long)_handlePlistResult:(id)arg1;
- (long long)_handleServerJSONResult:(id)arg1;
- (long long)_handleServerProtobufResult:(id)arg1 rawData:(id)arg2;
- (void)_loadRequest:(id)arg1;
- (void)_logHTTPResponse:(id)arg1;
- (void)_logParsedObject:(id)arg1;
- (void)_logRequest:(id)arg1;
- (void)_makeTrafficFileHandleWithPrefix:(id)arg1 outPath:(id*)arg2 outHandle:(id*)arg3;
- (void)_performRequest;
- (void)_populateURLSessionConfiguration;
- (void)_registerPushTokens;
- (id)_requestFileHandle;
- (id)_responseFileHandle;
- (void)_setupConfiguration;
- (void)_setupMescal;
- (void)_setupPublicDatabaseURL;
- (id)_versionHeader;
- (id)acceptContentType;
- (id)accountInfoProvider;
- (id)additionalHeaderValues;
- (bool)allowAutomaticRedirects;
- (bool)allowsAnonymousAccount;
- (bool)allowsAuthedAccount;
- (bool)allowsCellularAccess;
- (id)binaryRequestFileHandle;
- (id)binaryRequestLogFilePath;
- (id)binaryResponseFileHandle;
- (id)binaryResponseLogFilePath;
- (unsigned long long)cachePolicy;
- (long long)cachedPartitionType;
- (long long)cachedServerType;
- (void)cancel;
- (id)ckShortDescription;
- (id)completionBlock;
- (id)context;
- (long long)databaseScope;
- (id)dateRequestWentOut;
- (void)dealloc;
- (id)defaultParserForContentType:(id)arg1;
- (id)delegateQueue;
- (id)description;
- (id)deviceID;
- (id)error;
- (Class)expectedResponseClass;
- (bool)expectsSingleObject;
- (void)finishWithError:(id)arg1;
- (id)flowControlKey;
- (void)generateSignature:(id)arg1;
- (id)hardwareIDOverride;
- (bool)hasRequestBody;
- (bool)haveCachedPartitionType;
- (bool)haveCachedServerType;
- (id)httpMethod;
- (bool)includeContainerInfo;
- (void)inheritParentSectionID:(id)arg1;
- (id)init;
- (bool)isCancelled;
- (bool)isFinished;
- (int)isolationLevel;
- (id)lastRedirectURL;
- (bool)markAsFinished;
- (unsigned long long)numDownloadedElements;
- (id)operationRequestWithType:(int)arg1;
- (int)operationType;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (long long)partitionType;
- (id)path;
- (void)performRequest;
- (id)protobufOperationName;
- (void)reportStatusWithError:(id)arg1;
- (id)request;
- (id)requestBodyStream;
- (id)requestContentType;
- (void)requestDidParseJSONObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParsePlaintextObject:(id)arg1;
- (void)requestDidParsePlistObject:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestFileHandle;
- (id)requestLogFilePath;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)requestProgressBlock;
- (id)requestProperties;
- (id)requestUUID;
- (bool)requiresAppPartitionURL;
- (bool)requiresConfiguration;
- (bool)requiresDeviceID;
- (bool)requiresSignature;
- (bool)requiresTokenRegistration;
- (id)response;
- (id)responseBodyParser;
- (id)responseFileHandle;
- (id)responseHeaders;
- (id)responseLogFilePath;
- (id)responseProgressBlock;
- (long long)responseStatusCode;
- (id)sectionID;
- (long long)serverType;
- (id)sessionConfiguration;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setAllowAutomaticRedirects:(bool)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setBinaryRequestFileHandle:(id)arg1;
- (void)setBinaryRequestLogFilePath:(id)arg1;
- (void)setBinaryResponseFileHandle:(id)arg1;
- (void)setBinaryResponseLogFilePath:(id)arg1;
- (void)setCachedPartitionType:(long long)arg1;
- (void)setCachedServerType:(long long)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDatabaseScope:(long long)arg1;
- (void)setDateRequestWentOut:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFlowControlKey:(id)arg1;
- (void)setHardwareIDOverride:(id)arg1;
- (void)setHaveCachedPartitionType:(bool)arg1;
- (void)setHaveCachedServerType:(bool)arg1;
- (void)setNumDownloadedElements:(unsigned long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestFileHandle:(id)arg1;
- (void)setRequestLogFilePath:(id)arg1;
- (void)setRequestProgressBlock:(id)arg1;
- (void)setRequestProperties:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseBodyParser:(id)arg1;
- (void)setResponseFileHandle:(id)arg1;
- (void)setResponseLogFilePath:(id)arg1;
- (void)setResponseProgressBlock:(id)arg1;
- (void)setSessionConfiguration:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setTranslator:(id)arg1;
- (void)setUrlSessionTask:(id)arg1;
- (void)setUsesBackgroundSession:(bool)arg1;
- (bool)shouldCompressBody;
- (bool)shouldLogResponseBody;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (id)streamWriter;
- (void)tearDownResources;
- (void)tearDownResourcesAndReleaseTheZoneLocks;
- (double)timeoutInterval;
- (id)translator;
- (void)updateSignatureWithReceivedBytes:(id)arg1;
- (void)updateSignatureWithTransmittedBytes:(id)arg1;
- (id)url;
- (id)urlSessionTask;
- (bool)usesBackgroundSession;
- (bool)validate:(id*)arg1;
- (id)zoneIDsToLock;

@end