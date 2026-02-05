#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ESCAtomicfuNativeMutexNode, ESCAtomicfuSynchronizedObject, ESCAtomicfuSynchronizedObjectLockState, ESCAtomicfuSynchronizedObjectStatus, ESCBufferOverflow, ESCChannelFactory, ESCChannelFlow<T>, ESCCloseableCoroutineDispatcher, ESCCoroutineDispatcher, ESCCoroutineDispatcherKey, ESCCoroutineExceptionHandlerKey, ESCCoroutineName, ESCCoroutineNameKey, ESCCoroutineStart, ESCDispatchers, ESCGlobalScope, ESCJobKey, ESCJobSupport, ESCKoin_coreBeanDefinition<T>, ESCKoin_coreCallbacks<T>, ESCKoin_coreExtensionManager, ESCKoin_coreInstanceFactory<T>, ESCKoin_coreInstanceFactoryCompanion, ESCKoin_coreInstanceRegistry, ESCKoin_coreKind, ESCKoin_coreKoin, ESCKoin_coreKoinDefinition<R>, ESCKoin_coreLevel, ESCKoin_coreLockable, ESCKoin_coreLogger, ESCKoin_coreModule, ESCKoin_coreParametersHolder, ESCKoin_corePropertyRegistry, ESCKoin_coreResolutionContext, ESCKoin_coreScope, ESCKoin_coreScopeDSL, ESCKoin_coreScopeRegistry, ESCKoin_coreScopeRegistryCompanion, ESCKoin_coreSingleInstanceFactory<T>, ESCKotlinAbstractCoroutineContextElement, ESCKotlinAbstractCoroutineContextKey<B, E>, ESCKotlinArray<T>, ESCKotlinAtomicReference<T>, ESCKotlinByteArray, ESCKotlinByteIterator, ESCKotlinCancellationException, ESCKotlinEnum<E>, ESCKotlinEnumCompanion, ESCKotlinException, ESCKotlinIllegalStateException, ESCKotlinIntArray, ESCKotlinIntIterator, ESCKotlinIntProgression, ESCKotlinIntProgressionCompanion, ESCKotlinIntRange, ESCKotlinIntRangeCompanion, ESCKotlinKTypeProjection, ESCKotlinKTypeProjectionCompanion, ESCKotlinKVariance, ESCKotlinLazyThreadSafetyMode, ESCKotlinLongArray, ESCKotlinLongIterator, ESCKotlinLongProgression, ESCKotlinLongProgressionCompanion, ESCKotlinLongRange, ESCKotlinLongRangeCompanion, ESCKotlinNoSuchElementException, ESCKotlinNothing, ESCKotlinRuntimeException, ESCKotlinThrowable, ESCKotlinUnit, ESCKotlinx_io_coreBuffer, ESCKotlinx_serialization_coreSerialKind, ESCKotlinx_serialization_coreSerializersModule, ESCKtor_client_coreHttpClient, ESCKtor_client_coreHttpClientCall, ESCKtor_client_coreHttpClientCallCompanion, ESCKtor_client_coreHttpClientConfig<T>, ESCKtor_client_coreHttpClientEngineConfig, ESCKtor_client_coreHttpReceivePipeline, ESCKtor_client_coreHttpReceivePipelinePhases, ESCKtor_client_coreHttpRequestBuilder, ESCKtor_client_coreHttpRequestBuilderCompanion, ESCKtor_client_coreHttpRequestData, ESCKtor_client_coreHttpRequestPipeline, ESCKtor_client_coreHttpRequestPipelinePhases, ESCKtor_client_coreHttpResponse, ESCKtor_client_coreHttpResponseContainer, ESCKtor_client_coreHttpResponseData, ESCKtor_client_coreHttpResponsePipeline, ESCKtor_client_coreHttpResponsePipelinePhases, ESCKtor_client_coreHttpSendPipeline, ESCKtor_client_coreHttpSendPipelinePhases, ESCKtor_client_coreProxyConfig, ESCKtor_eventsEventDefinition<T>, ESCKtor_eventsEvents, ESCKtor_httpContentType, ESCKtor_httpContentTypeCompanion, ESCKtor_httpHeaderValueParam, ESCKtor_httpHeaderValueWithParameters, ESCKtor_httpHeaderValueWithParametersCompanion, ESCKtor_httpHeadersBuilder, ESCKtor_httpHttpMethod, ESCKtor_httpHttpMethodCompanion, ESCKtor_httpHttpProtocolVersion, ESCKtor_httpHttpProtocolVersionCompanion, ESCKtor_httpHttpStatusCode, ESCKtor_httpHttpStatusCodeCompanion, ESCKtor_httpOutgoingContent, ESCKtor_httpURLBuilder, ESCKtor_httpURLBuilderCompanion, ESCKtor_httpURLProtocol, ESCKtor_httpURLProtocolCompanion, ESCKtor_httpUrl, ESCKtor_httpUrlCompanion, ESCKtor_utilsAttributeKey<T>, ESCKtor_utilsGMTDate, ESCKtor_utilsGMTDateCompanion, ESCKtor_utilsMonth, ESCKtor_utilsMonthCompanion, ESCKtor_utilsPipeline<TSubject, TContext>, ESCKtor_utilsPipelinePhase, ESCKtor_utilsStringValuesBuilderImpl, ESCKtor_utilsTypeInfo, ESCKtor_utilsWeekDay, ESCKtor_utilsWeekDayCompanion, ESCLifecycle_viewmodelViewModel, ESCLockFreeLinkedListNode, ESCMainCoroutineDispatcher, ESCNonCancellable, ESCNonDisposableHandle, ESCPokemon, ESCPokemonApi, ESCPokemonDetail, ESCPokemonDetailDto, ESCPokemonDetailDtoCompanion, ESCPokemonDto, ESCPokemonDtoCompanion, ESCPokemonResponseDto, ESCPokemonResponseDtoCompanion, ESCPokemonStatDto, ESCPokemonStatDtoCompanion, ESCPokemonUiState, ESCPokemonViewModel, ESCResult<__covariant T>, ESCResultError, ESCResultSuccess<__covariant T>, ESCSharingCommand, ESCSharingStartedCompanion, ESCSpritesDto, ESCSpritesDtoCompanion, ESCStatInfoDto, ESCStatInfoDtoCompanion, ESCThreadSafeHeap<T>, ESCTimeoutCancellationException, UIViewController;

@protocol ESCBroadcastChannel, ESCCancellableContinuation, ESCChannel, ESCChannelIterator, ESCChildHandle, ESCChildJob, ESCCompletableDeferred, ESCCompletableJob, ESCCopyableThrowable, ESCCoroutineExceptionHandler, ESCCoroutineScope, ESCDeferred, ESCDisposableHandle, ESCFlow, ESCFlowCollector, ESCFusibleFlow, ESCJob, ESCKoin_coreKoinComponent, ESCKoin_coreKoinExtension, ESCKoin_coreKoinScopeComponent, ESCKoin_coreQualifier, ESCKoin_coreScopeCallback, ESCKotlinAnnotation, ESCKotlinAutoCloseable, ESCKotlinClosedRange, ESCKotlinComparable, ESCKotlinContinuation, ESCKotlinContinuationInterceptor, ESCKotlinCoroutineContext, ESCKotlinCoroutineContextElement, ESCKotlinCoroutineContextKey, ESCKotlinFunction, ESCKotlinIterable, ESCKotlinIterator, ESCKotlinKAnnotatedElement, ESCKotlinKClass, ESCKotlinKClassifier, ESCKotlinKDeclarationContainer, ESCKotlinKType, ESCKotlinLazy, ESCKotlinMapEntry, ESCKotlinOpenEndRange, ESCKotlinSequence, ESCKotlinSuspendFunction0, ESCKotlinSuspendFunction1, ESCKotlinSuspendFunction2, ESCKotlinSuspendFunction3, ESCKotlinSuspendFunction4, ESCKotlinSuspendFunction5, ESCKotlinSuspendFunction6, ESCKotlinx_io_coreRawSink, ESCKotlinx_io_coreRawSource, ESCKotlinx_io_coreSink, ESCKotlinx_io_coreSource, ESCKotlinx_serialization_coreCompositeDecoder, ESCKotlinx_serialization_coreCompositeEncoder, ESCKotlinx_serialization_coreDecoder, ESCKotlinx_serialization_coreDeserializationStrategy, ESCKotlinx_serialization_coreEncoder, ESCKotlinx_serialization_coreKSerializer, ESCKotlinx_serialization_coreSerialDescriptor, ESCKotlinx_serialization_coreSerializationStrategy, ESCKotlinx_serialization_coreSerializersModuleCollector, ESCKtor_client_coreHttpClientEngine, ESCKtor_client_coreHttpClientEngineCapability, ESCKtor_client_coreHttpClientPlugin, ESCKtor_client_coreHttpRequest, ESCKtor_httpHeaders, ESCKtor_httpHttpMessage, ESCKtor_httpHttpMessageBuilder, ESCKtor_httpParameters, ESCKtor_httpParametersBuilder, ESCKtor_ioByteReadChannel, ESCKtor_ioCloseable, ESCKtor_ioJvmSerializable, ESCKtor_utilsAttributes, ESCKtor_utilsStringValues, ESCKtor_utilsStringValuesBuilder, ESCMainDispatcherFactory, ESCMutableSharedFlow, ESCMutableStateFlow, ESCMutex, ESCParentJob, ESCPlatform, ESCPokemonRepository, ESCProducerScope, ESCReceiveChannel, ESCRunnable, ESCSelectBuilder, ESCSelectClause, ESCSelectClause0, ESCSelectClause1, ESCSelectClause2, ESCSelectInstance, ESCSemaphore, ESCSendChannel, ESCSharedFlow, ESCSharingStarted, ESCStateFlow;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface ESCBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface ESCBase (ESCBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface ESCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface ESCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorESCKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface ESCNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface ESCByte : ESCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface ESCUByte : ESCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface ESCShort : ESCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface ESCUShort : ESCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface ESCInt : ESCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface ESCUInt : ESCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface ESCLong : ESCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface ESCULong : ESCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface ESCFloat : ESCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface ESCDouble : ESCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface ESCBoolean : ESCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface ESCGreeting : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol ESCPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface ESCIOSPlatform : ESCBase <ESCPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonApi")))
@interface ESCPokemonApi : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pokemonApi __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCPokemonApi *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BASE_URL __attribute__((swift_name("BASE_URL")));
@property (readonly) ESCKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonDetailDto")))
@interface ESCPokemonDetailDto : ESCBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name height:(int32_t)height weight:(int32_t)weight sprites:(ESCSpritesDto *)sprites stats:(NSArray<ESCPokemonStatDto *> *)stats __attribute__((swift_name("init(id:name:height:weight:sprites:stats:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCPokemonDetailDtoCompanion *companion __attribute__((swift_name("companion")));
- (ESCPokemonDetailDto *)doCopyId:(int32_t)id name:(NSString *)name height:(int32_t)height weight:(int32_t)weight sprites:(ESCSpritesDto *)sprites stats:(NSArray<ESCPokemonStatDto *> *)stats __attribute__((swift_name("doCopy(id:name:height:weight:sprites:stats:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) ESCSpritesDto *sprites __attribute__((swift_name("sprites")));
@property (readonly) NSArray<ESCPokemonStatDto *> *stats __attribute__((swift_name("stats")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonDetailDto.Companion")))
@interface ESCPokemonDetailDtoCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCPokemonDetailDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<ESCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonDto")))
@interface ESCPokemonDto : ESCBase
- (instancetype)initWithName:(NSString *)name url:(NSString *)url __attribute__((swift_name("init(name:url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCPokemonDtoCompanion *companion __attribute__((swift_name("companion")));
- (ESCPokemonDto *)doCopyName:(NSString *)name url:(NSString *)url __attribute__((swift_name("doCopy(name:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonDto.Companion")))
@interface ESCPokemonDtoCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCPokemonDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<ESCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonResponseDto")))
@interface ESCPokemonResponseDto : ESCBase
- (instancetype)initWithCount:(int32_t)count next:(NSString * _Nullable)next previous:(NSString * _Nullable)previous results:(NSArray<ESCPokemonDto *> *)results __attribute__((swift_name("init(count:next:previous:results:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCPokemonResponseDtoCompanion *companion __attribute__((swift_name("companion")));
- (ESCPokemonResponseDto *)doCopyCount:(int32_t)count next:(NSString * _Nullable)next previous:(NSString * _Nullable)previous results:(NSArray<ESCPokemonDto *> *)results __attribute__((swift_name("doCopy(count:next:previous:results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable next __attribute__((swift_name("next")));
@property (readonly) NSString * _Nullable previous __attribute__((swift_name("previous")));
@property (readonly) NSArray<ESCPokemonDto *> *results __attribute__((swift_name("results")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonResponseDto.Companion")))
@interface ESCPokemonResponseDtoCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCPokemonResponseDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<ESCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonStatDto")))
@interface ESCPokemonStatDto : ESCBase
- (instancetype)initWithBaseStat:(int32_t)baseStat stat:(ESCStatInfoDto *)stat __attribute__((swift_name("init(baseStat:stat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCPokemonStatDtoCompanion *companion __attribute__((swift_name("companion")));
- (ESCPokemonStatDto *)doCopyBaseStat:(int32_t)baseStat stat:(ESCStatInfoDto *)stat __attribute__((swift_name("doCopy(baseStat:stat:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="base_stat")
*/
@property (readonly) int32_t baseStat __attribute__((swift_name("baseStat")));
@property (readonly) ESCStatInfoDto *stat __attribute__((swift_name("stat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonStatDto.Companion")))
@interface ESCPokemonStatDtoCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCPokemonStatDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<ESCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpritesDto")))
@interface ESCSpritesDto : ESCBase
- (instancetype)initWithFrontDefault:(NSString * _Nullable)frontDefault __attribute__((swift_name("init(frontDefault:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCSpritesDtoCompanion *companion __attribute__((swift_name("companion")));
- (ESCSpritesDto *)doCopyFrontDefault:(NSString * _Nullable)frontDefault __attribute__((swift_name("doCopy(frontDefault:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="front_default")
*/
@property (readonly) NSString * _Nullable frontDefault __attribute__((swift_name("frontDefault")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpritesDto.Companion")))
@interface ESCSpritesDtoCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCSpritesDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<ESCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatInfoDto")))
@interface ESCStatInfoDto : ESCBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCStatInfoDtoCompanion *companion __attribute__((swift_name("companion")));
- (ESCStatInfoDto *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatInfoDto.Companion")))
@interface ESCStatInfoDtoCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCStatInfoDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<ESCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("PokemonRepository")))
@protocol ESCPokemonRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPokemonDetailId:(int32_t)id completionHandler:(void (^)(ESCPokemonDetail * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPokemonDetail(id:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPokemonListLimit:(int32_t)limit offset:(int32_t)offset completionHandler:(void (^)(NSArray<ESCPokemon *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPokemonList(limit:offset:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonRepositoryImpl")))
@interface ESCPokemonRepositoryImpl : ESCBase <ESCPokemonRepository>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPokemonDetailId:(int32_t)id completionHandler:(void (^)(ESCPokemonDetail * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPokemonDetail(id:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPokemonListLimit:(int32_t)limit offset:(int32_t)offset completionHandler:(void (^)(NSArray<ESCPokemon *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPokemonList(limit:offset:completionHandler:)")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol ESCKoin_coreKoinComponent
@required
- (ESCKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonViewModelHelper")))
@interface ESCPokemonViewModelHelper : ESCBase <ESCKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ESCPokemonViewModel *)getViewModel __attribute__((swift_name("getViewModel()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pokemon")))
@interface ESCPokemon : ESCBase
- (instancetype)initWithName:(NSString *)name url:(NSString *)url __attribute__((swift_name("init(name:url:)"))) __attribute__((objc_designated_initializer));
- (ESCPokemon *)doCopyName:(NSString *)name url:(NSString *)url __attribute__((swift_name("doCopy(name:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonDetail")))
@interface ESCPokemonDetail : ESCBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name height:(int32_t)height weight:(int32_t)weight imageUrl:(NSString *)imageUrl stats:(NSDictionary<NSString *, ESCInt *> *)stats __attribute__((swift_name("init(id:name:height:weight:imageUrl:stats:)"))) __attribute__((objc_designated_initializer));
- (ESCPokemonDetail *)doCopyId:(int32_t)id name:(NSString *)name height:(int32_t)height weight:(int32_t)weight imageUrl:(NSString *)imageUrl stats:(NSDictionary<NSString *, ESCInt *> *)stats __attribute__((swift_name("doCopy(id:name:height:weight:imageUrl:stats:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSDictionary<NSString *, ESCInt *> *stats __attribute__((swift_name("stats")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@end

__attribute__((swift_name("Result")))
@interface ESCResult<__covariant T> : ESCBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultError")))
@interface ESCResultError : ESCResult<ESCKotlinNothing *>
- (instancetype)initWithMessage:(NSString *)message throwable:(ESCKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer));
- (ESCResultError *)doCopyMessage:(NSString *)message throwable:(ESCKotlinThrowable * _Nullable)throwable __attribute__((swift_name("doCopy(message:throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) ESCKotlinThrowable * _Nullable throwable __attribute__((swift_name("throwable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultSuccess")))
@interface ESCResultSuccess<__covariant T> : ESCResult<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (ESCResultSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("EkycHandler")))
@interface ESCEkycHandler : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonUiState")))
@interface ESCPokemonUiState : ESCBase
- (instancetype)initWithPokemonList:(NSArray<ESCPokemon *> *)pokemonList selectedPokemon:(ESCPokemonDetail * _Nullable)selectedPokemon isLoading:(BOOL)isLoading error:(NSString * _Nullable)error __attribute__((swift_name("init(pokemonList:selectedPokemon:isLoading:error:)"))) __attribute__((objc_designated_initializer));
- (ESCPokemonUiState *)doCopyPokemonList:(NSArray<ESCPokemon *> *)pokemonList selectedPokemon:(ESCPokemonDetail * _Nullable)selectedPokemon isLoading:(BOOL)isLoading error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(pokemonList:selectedPokemon:isLoading:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@property (readonly) NSArray<ESCPokemon *> *pokemonList __attribute__((swift_name("pokemonList")));
@property (readonly) ESCPokemonDetail * _Nullable selectedPokemon __attribute__((swift_name("selectedPokemon")));
@end

__attribute__((swift_name("Lifecycle_viewmodelViewModel")))
@interface ESCLifecycle_viewmodelViewModel : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCloseables:(ESCKotlinArray<id<ESCKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(closeables:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithViewModelScope:(id<ESCCoroutineScope>)viewModelScope __attribute__((swift_name("init(viewModelScope:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithViewModelScope:(id<ESCCoroutineScope>)viewModelScope closeables:(ESCKotlinArray<id<ESCKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(viewModelScope:closeables:)"))) __attribute__((objc_designated_initializer));
- (void)addCloseableCloseable:(id<ESCKotlinAutoCloseable>)closeable __attribute__((swift_name("addCloseable(closeable:)")));
- (void)addCloseableKey:(NSString *)key closeable:(id<ESCKotlinAutoCloseable>)closeable __attribute__((swift_name("addCloseable(key:closeable:)")));
- (id<ESCKotlinAutoCloseable> _Nullable)getCloseableKey:(NSString *)key __attribute__((swift_name("getCloseable(key:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCleared __attribute__((swift_name("onCleared()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PokemonViewModel")))
@interface ESCPokemonViewModel : ESCLifecycle_viewmodelViewModel
- (instancetype)initWithRepository:(id<ESCPokemonRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCloseables:(ESCKotlinArray<id<ESCKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<ESCCoroutineScope>)viewModelScope __attribute__((swift_name("init(viewModelScope:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<ESCCoroutineScope>)viewModelScope closeables:(ESCKotlinArray<id<ESCKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(viewModelScope:closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)clearSelection __attribute__((swift_name("clearSelection()")));
- (void)loadPokemonList __attribute__((swift_name("loadPokemonList()")));
- (void)selectPokemonPokemon:(ESCPokemon *)pokemon __attribute__((swift_name("selectPokemon(pokemon:)")));
@property (readonly) id<ESCStateFlow> uiState __attribute__((swift_name("uiState")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol ESCKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<ESCKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<ESCKotlinCoroutineContextElement> _Nullable)getKey:(id<ESCKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<ESCKotlinCoroutineContext>)minusKeyKey:(id<ESCKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<ESCKotlinCoroutineContext>)plusContext:(id<ESCKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol ESCKotlinCoroutineContextElement <ESCKotlinCoroutineContext>
@required
@property (readonly) id<ESCKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Job")))
@protocol ESCJob <ESCKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<ESCChildHandle>)attachChildChild:(id<ESCChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(ESCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (ESCKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<ESCDisposableHandle>)invokeOnCompletionHandler:(void (^)(ESCKotlinThrowable * _Nullable cause))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<ESCDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(ESCKotlinThrowable * _Nullable cause))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<ESCJob>)plusOther:(id<ESCJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<ESCKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<ESCSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<ESCJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("ChildJob")))
@protocol ESCChildJob <ESCJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<ESCParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("ParentJob")))
@protocol ESCParentJob <ESCJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (ESCKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("JobSupport")))
@interface ESCJobSupport : ESCBase <ESCJob, ESCChildJob, ESCParentJob>
- (instancetype)initWithActive:(BOOL)active __attribute__((swift_name("init(active:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("This is internal API and may be removed in the future releases")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)afterCompletionState:(id _Nullable)state __attribute__((swift_name("afterCompletion(state:)")));
- (id<ESCChildHandle>)attachChildChild:(id<ESCChildJob>)child __attribute__((swift_name("attachChild(child:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)awaitInternalWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitInternal(completionHandler:)")));
- (void)cancelCause:(ESCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)cancelCoroutineCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancelCoroutine(cause:)")));
- (void)cancelInternalCause:(ESCKotlinThrowable *)cause __attribute__((swift_name("cancelInternal(cause:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)cancellationExceptionMessage __attribute__((swift_name("cancellationExceptionMessage()")));
- (BOOL)childCancelledCause:(ESCKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
- (ESCKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (ESCKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
- (ESCKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)handleJobExceptionException:(ESCKotlinThrowable *)exception __attribute__((swift_name("handleJobException(exception:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)doInitParentJobParent:(id<ESCJob> _Nullable)parent __attribute__((swift_name("doInitParentJob(parent:)")));
- (id<ESCDisposableHandle>)invokeOnCompletionHandler:(void (^)(ESCKotlinThrowable * _Nullable cause))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<ESCDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(ESCKotlinThrowable * _Nullable cause))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCancellingCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("onCancelling(cause:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCompletionInternalState:(id _Nullable)state __attribute__((swift_name("onCompletionInternal(state:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onStart __attribute__((swift_name("onStart()")));
- (void)parentCancelledParentJob:(id<ESCParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
- (BOOL)start __attribute__((swift_name("start()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (ESCKotlinCancellationException *)toCancellationException:(ESCKotlinThrowable *)receiver message:(NSString * _Nullable)message __attribute__((swift_name("toCancellationException(_:message:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (NSString *)toDebugString __attribute__((swift_name("toDebugString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ESCKotlinSequence> children __attribute__((swift_name("children")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) ESCKotlinThrowable * _Nullable completionCause __attribute__((swift_name("completionCause")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL completionCauseHandled __attribute__((swift_name("completionCauseHandled")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) BOOL isCompletedExceptionally __attribute__((swift_name("isCompletedExceptionally")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isScopedCoroutine __attribute__((swift_name("isScopedCoroutine")));
@property (readonly) id<ESCKotlinCoroutineContextKey> key __attribute__((swift_name("key")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<ESCSelectClause1> onAwaitInternal __attribute__((swift_name("onAwaitInternal")));
@property (readonly) id<ESCSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@property (readonly) id<ESCJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol ESCKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<ESCKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((swift_name("CoroutineScope")))
@protocol ESCCoroutineScope
@required
@property (readonly) id<ESCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("AbstractCoroutine")))
@interface ESCAbstractCoroutine<__contravariant T> : ESCJobSupport <ESCJob, ESCKotlinContinuation, ESCCoroutineScope>
- (instancetype)initWithParentContext:(id<ESCKotlinCoroutineContext>)parentContext initParentJob:(BOOL)initParentJob active:(BOOL)active __attribute__((swift_name("init(parentContext:initParentJob:active:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithActive:(BOOL)active __attribute__((swift_name("init(active:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)afterResumeState:(id _Nullable)state __attribute__((swift_name("afterResume(state:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)cancellationExceptionMessage __attribute__((swift_name("cancellationExceptionMessage()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCancelledCause:(ESCKotlinThrowable *)cause handled:(BOOL)handled __attribute__((swift_name("onCancelled(cause:handled:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCompletedValue:(T _Nullable)value __attribute__((swift_name("onCompleted(value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCompletionInternalState:(id _Nullable)state __attribute__((swift_name("onCompletionInternal(state:)")));
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
- (void)startStart:(ESCCoroutineStart *)start receiver:(id _Nullable)receiver block:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("start(start:receiver:block:)")));
@property (readonly) id<ESCKotlinCoroutineContext> context __attribute__((swift_name("context")));
@property (readonly) id<ESCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@end

__attribute__((swift_name("CancellableContinuation")))
@protocol ESCCancellableContinuation <ESCKotlinContinuation>
@required
- (BOOL)cancelCause_:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)completeResumeToken:(id)token __attribute__((swift_name("completeResume(token:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)doInitCancellability __attribute__((swift_name("doInitCancellability()")));
- (void)invokeOnCancellationHandler:(void (^)(ESCKotlinThrowable * _Nullable cause))handler __attribute__((swift_name("invokeOnCancellation(handler:)")));
- (void)resumeValue:(id _Nullable)value onCancellation:(void (^ _Nullable)(ESCKotlinThrowable *cause, id _Nullable value, id<ESCKotlinCoroutineContext> context))onCancellation __attribute__((swift_name("resume(value:onCancellation:)")));
- (void)resumeValue:(id _Nullable)value onCancellation_:(void (^ _Nullable)(ESCKotlinThrowable *cause))onCancellation __attribute__((swift_name("resume(value:onCancellation_:)"))) __attribute__((deprecated("Use the overload that also accepts the `value` and the coroutine context in lambda")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resumeUndispatched:(ESCCoroutineDispatcher *)receiver value:(id _Nullable)value __attribute__((swift_name("resumeUndispatched(_:value:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resumeUndispatchedWithException:(ESCCoroutineDispatcher *)receiver exception:(ESCKotlinThrowable *)exception __attribute__((swift_name("resumeUndispatchedWithException(_:exception:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent __attribute__((swift_name("tryResume(value:idempotent:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent onCancellation:(void (^ _Nullable)(ESCKotlinThrowable *cause, id _Nullable value, id<ESCKotlinCoroutineContext> context))onCancellation __attribute__((swift_name("tryResume(value:idempotent:onCancellation:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id _Nullable)tryResumeWithExceptionException:(ESCKotlinThrowable *)exception __attribute__((swift_name("tryResumeWithException(exception:)")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@end

__attribute__((swift_name("DisposableHandle")))
@protocol ESCDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("ChildHandle")))
@protocol ESCChildHandle <ESCDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(ESCKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<ESCJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface ESCKotlinAbstractCoroutineContextElement : ESCBase <ESCKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<ESCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<ESCKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol ESCKotlinContinuationInterceptor <ESCKotlinCoroutineContextElement>
@required
- (id<ESCKotlinContinuation>)interceptContinuationContinuation:(id<ESCKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<ESCKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("CoroutineDispatcher")))
@interface ESCCoroutineDispatcher : ESCKotlinAbstractCoroutineContextElement <ESCKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<ESCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ESCCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<ESCKotlinCoroutineContext>)context block:(id<ESCRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<ESCKotlinCoroutineContext>)context block:(id<ESCRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<ESCKotlinContinuation>)interceptContinuationContinuation:(id<ESCKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<ESCKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (ESCCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (ESCCoroutineDispatcher *)plusOther_:(ESCCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<ESCKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol ESCKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("CloseableCoroutineDispatcher")))
@interface ESCCloseableCoroutineDispatcher : ESCCoroutineDispatcher <ESCKotlinAutoCloseable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Deferred")))
@protocol ESCDeferred <ESCJob>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (ESCKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<ESCSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end

__attribute__((swift_name("CompletableDeferred")))
@protocol ESCCompletableDeferred <ESCDeferred>
@required
- (BOOL)completeValue:(id _Nullable)value __attribute__((swift_name("complete(value:)")));
- (BOOL)completeExceptionallyException:(ESCKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end

__attribute__((swift_name("CompletableJob")))
@protocol ESCCompletableJob <ESCJob>
@required
- (BOOL)complete __attribute__((swift_name("complete()")));
- (BOOL)completeExceptionallyException:(ESCKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface ESCKotlinThrowable : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (ESCKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ESCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface ESCKotlinException : ESCKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface ESCKotlinRuntimeException : ESCKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompletionHandlerException")))
@interface ESCCompletionHandlerException : ESCKotlinRuntimeException
- (instancetype)initWithMessage:(NSString *)message cause:(ESCKotlinThrowable *)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
__attribute__((swift_name("CopyableThrowable")))
@protocol ESCCopyableThrowable
@required
- (ESCKotlinThrowable * _Nullable)createCopy __attribute__((swift_name("createCopy()")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol ESCKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface ESCKotlinAbstractCoroutineContextKey<B, E> : ESCBase <ESCKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<ESCKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<ESCKotlinCoroutineContextElement> element))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineDispatcher.Key")))
@interface ESCCoroutineDispatcherKey : ESCKotlinAbstractCoroutineContextKey<id<ESCKotlinContinuationInterceptor>, ESCCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<ESCKotlinCoroutineContextKey>)baseKey safeCast:(id<ESCKotlinCoroutineContextElement> _Nullable (^)(id<ESCKotlinCoroutineContextElement> element))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CoroutineExceptionHandler")))
@protocol ESCCoroutineExceptionHandler <ESCKotlinCoroutineContextElement>
@required
- (void)handleExceptionContext:(id<ESCKotlinCoroutineContext>)context exception:(ESCKotlinThrowable *)exception __attribute__((swift_name("handleException(context:exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineExceptionHandlerKey")))
@interface ESCCoroutineExceptionHandlerKey : ESCBase <ESCKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCCoroutineExceptionHandlerKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineName")))
@interface ESCCoroutineName : ESCKotlinAbstractCoroutineContextElement
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithKey:(id<ESCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ESCCoroutineNameKey *companion __attribute__((swift_name("companion")));
- (ESCCoroutineName *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineName.Key")))
@interface ESCCoroutineNameKey : ESCBase <ESCKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCCoroutineNameKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol ESCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface ESCKotlinEnum<E> : ESCBase <ESCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineStart")))
@interface ESCCoroutineStart : ESCKotlinEnum<ESCCoroutineStart *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ESCCoroutineStart *default_ __attribute__((swift_name("default_")));
@property (class, readonly) ESCCoroutineStart *lazy __attribute__((swift_name("lazy")));
@property (class, readonly) ESCCoroutineStart *atomic __attribute__((swift_name("atomic")));
@property (class, readonly) ESCCoroutineStart *undispatched __attribute__((swift_name("undispatched")));
+ (ESCKotlinArray<ESCCoroutineStart *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ESCCoroutineStart *> *entries __attribute__((swift_name("entries")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)invokeBlock:(id<ESCKotlinSuspendFunction1>)block receiver:(id _Nullable)receiver completion:(id<ESCKotlinContinuation>)completion __attribute__((swift_name("invoke(block:receiver:completion:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) BOOL isLazy __attribute__((swift_name("isLazy")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Delay")))
@protocol ESCDelay
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)delayTime:(int64_t)time completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(time:completionHandler:)"))) __attribute__((unavailable("Deprecated without replacement as an internal method never intended for public use")));
- (id<ESCDisposableHandle>)invokeOnTimeoutTimeMillis:(int64_t)timeMillis block:(id<ESCRunnable>)block context:(id<ESCKotlinCoroutineContext>)context __attribute__((swift_name("invokeOnTimeout(timeMillis:block:context:)")));
- (void)scheduleResumeAfterDelayTimeMillis:(int64_t)timeMillis continuation:(id<ESCCancellableContinuation>)continuation __attribute__((swift_name("scheduleResumeAfterDelay(timeMillis:continuation:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dispatchers")))
@interface ESCDispatchers : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dispatchers __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCDispatchers *shared __attribute__((swift_name("shared")));
@property (readonly) ESCCoroutineDispatcher *Default __attribute__((swift_name("Default")));
@property (readonly) ESCMainCoroutineDispatcher *Main __attribute__((swift_name("Main")));
@property (readonly) ESCCoroutineDispatcher *Unconfined __attribute__((swift_name("Unconfined")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlobalScope")))
@interface ESCGlobalScope : ESCBase <ESCCoroutineScope>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)globalScope __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCGlobalScope *shared __attribute__((swift_name("shared")));
@property (readonly) id<ESCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobKey")))
@interface ESCJobKey : ESCBase <ESCKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCJobKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("MainCoroutineDispatcher")))
@interface ESCMainCoroutineDispatcher : ESCCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ESCCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString * _Nullable)toStringInternalImpl __attribute__((swift_name("toStringInternalImpl()")));
@property (readonly) ESCMainCoroutineDispatcher *immediate __attribute__((swift_name("immediate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonCancellable")))
@interface ESCNonCancellable : ESCKotlinAbstractCoroutineContextElement <ESCJob>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithKey:(id<ESCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)nonCancellable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCNonCancellable *shared __attribute__((swift_name("shared")));
- (id<ESCChildHandle>)attachChildChild:(id<ESCChildJob>)child __attribute__((swift_name("attachChild(child:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (void)cancelCause:(ESCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (ESCKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (id<ESCDisposableHandle>)invokeOnCompletionHandler:(void (^)(ESCKotlinThrowable * _Nullable cause))handler __attribute__((swift_name("invokeOnCompletion(handler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (id<ESCDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(ESCKotlinThrowable * _Nullable cause))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (BOOL)start __attribute__((swift_name("start()"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ESCKotlinSequence> children __attribute__((swift_name("children"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) id<ESCSelectClause0> onJoin __attribute__((swift_name("onJoin"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) id<ESCJob> _Nullable parent __attribute__((swift_name("parent"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonDisposableHandle")))
@interface ESCNonDisposableHandle : ESCBase <ESCDisposableHandle, ESCChildHandle>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nonDisposableHandle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCNonDisposableHandle *shared __attribute__((swift_name("shared")));
- (BOOL)childCancelledCause:(ESCKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ESCJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Runnable")))
@protocol ESCRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface ESCKotlinIllegalStateException : ESCKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface ESCKotlinCancellationException : ESCKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutCancellationException")))
@interface ESCTimeoutCancellationException : ESCKotlinCancellationException <ESCCopyableThrowable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (ESCTimeoutCancellationException *)createCopy __attribute__((swift_name("createCopy()")));
@end

__attribute__((swift_name("SendChannel")))
@protocol ESCSendChannel
@required
- (BOOL)closeCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(ESCKotlinThrowable * _Nullable cause))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (BOOL)offerElement:(id _Nullable)element __attribute__((swift_name("offer(element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySend' method")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(id _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(id _Nullable)element __attribute__((swift_name("trySend(element:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<ESCSelectClause2> onSend __attribute__((swift_name("onSend")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
__attribute__((swift_name("BroadcastChannel")))
@protocol ESCBroadcastChannel <ESCSendChannel>
@required
- (void)cancelCause:(ESCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<ESCReceiveChannel>)openSubscription __attribute__((swift_name("openSubscription()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BufferOverflow")))
@interface ESCBufferOverflow : ESCKotlinEnum<ESCBufferOverflow *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ESCBufferOverflow *suspend __attribute__((swift_name("suspend")));
@property (class, readonly) ESCBufferOverflow *dropOldest __attribute__((swift_name("dropOldest")));
@property (class, readonly) ESCBufferOverflow *dropLatest __attribute__((swift_name("dropLatest")));
+ (ESCKotlinArray<ESCBufferOverflow *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ESCBufferOverflow *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("ReceiveChannel")))
@protocol ESCReceiveChannel
@required
- (void)cancelCause:(ESCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<ESCChannelIterator>)iterator __attribute__((swift_name("iterator()")));
- (id _Nullable)poll __attribute__((swift_name("poll()"))) __attribute__((unavailable("Deprecated in the favour of 'tryReceive'. Please note that the provided replacement does not rethrow channel's close cause as 'poll' did, for the precise replacement please refer to the 'poll' documentation")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveCatchingWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveCatching(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveOrNullWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(completionHandler:)"))) __attribute__((unavailable("Deprecated in favor of 'receiveCatching'. Please note that the provided replacement does not rethrow channel's close cause as 'receiveOrNull' did, for the detailed replacement please refer to the 'receiveOrNull' documentation")));
- (id _Nullable)tryReceive __attribute__((swift_name("tryReceive()")));

/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
@property (readonly) BOOL isClosedForReceive __attribute__((swift_name("isClosedForReceive")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) id<ESCSelectClause1> onReceive __attribute__((swift_name("onReceive")));
@property (readonly) id<ESCSelectClause1> onReceiveCatching __attribute__((swift_name("onReceiveCatching")));
@property (readonly) id<ESCSelectClause1> onReceiveOrNull __attribute__((swift_name("onReceiveOrNull"))) __attribute__((unavailable("Deprecated in favor of onReceiveCatching extension")));
@end

__attribute__((swift_name("Channel")))
@protocol ESCChannel <ESCSendChannel, ESCReceiveChannel>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelFactory")))
@interface ESCChannelFactory : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)factory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCChannelFactory *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t BUFFERED __attribute__((swift_name("BUFFERED")));
@property (readonly) int32_t CONFLATED __attribute__((swift_name("CONFLATED")));

/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
@property (readonly) NSString *DEFAULT_BUFFER_PROPERTY_NAME __attribute__((swift_name("DEFAULT_BUFFER_PROPERTY_NAME")));
@property (readonly) int32_t RENDEZVOUS __attribute__((swift_name("RENDEZVOUS")));
@property (readonly) int32_t UNLIMITED __attribute__((swift_name("UNLIMITED")));
@end

__attribute__((swift_name("ChannelIterator")))
@protocol ESCChannelIterator
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(ESCBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinNoSuchElementException")))
@interface ESCKotlinNoSuchElementException : ESCKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClosedReceiveChannelException")))
@interface ESCClosedReceiveChannelException : ESCKotlinNoSuchElementException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClosedSendChannelException")))
@interface ESCClosedSendChannelException : ESCKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConflatedBroadcastChannel")))
@interface ESCConflatedBroadcastChannel<E> : ESCBase <ESCBroadcastChannel>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("ConflatedBroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithValue:(E _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("ConflatedBroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));
- (void)cancelCause:(ESCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)closeCause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(ESCKotlinThrowable * _Nullable cause))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (BOOL)offerElement:(E _Nullable)element __attribute__((swift_name("offer(element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySend' method")));
- (id<ESCReceiveChannel>)openSubscription __attribute__((swift_name("openSubscription()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(E _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(E _Nullable)element __attribute__((swift_name("trySend(element:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<ESCSelectClause2> onSend __attribute__((swift_name("onSend")));
@property (readonly) E _Nullable value __attribute__((swift_name("value")));
@property (readonly) E _Nullable valueOrNull __attribute__((swift_name("valueOrNull")));
@end

__attribute__((swift_name("ProducerScope")))
@protocol ESCProducerScope <ESCCoroutineScope, ESCSendChannel>
@required
@property (readonly) id<ESCSendChannel> channel __attribute__((swift_name("channel")));
@end

__attribute__((swift_name("Flow")))
@protocol ESCFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ESCFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
__attribute__((swift_name("AbstractFlow")))
@interface ESCAbstractFlow<T> : ESCBase <ESCFlow>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ESCFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectSafelyCollector:(id<ESCFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectSafely(collector:completionHandler:)")));
@end

__attribute__((swift_name("FlowCollector")))
@protocol ESCFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("SharedFlow")))
@protocol ESCSharedFlow <ESCFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("MutableSharedFlow")))
@protocol ESCMutableSharedFlow <ESCSharedFlow, ESCFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<ESCStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("StateFlow")))
@protocol ESCStateFlow <ESCSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("MutableStateFlow")))
@protocol ESCMutableStateFlow <ESCStateFlow, ESCMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingCommand")))
@interface ESCSharingCommand : ESCKotlinEnum<ESCSharingCommand *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ESCSharingCommand *start __attribute__((swift_name("start")));
@property (class, readonly) ESCSharingCommand *stop __attribute__((swift_name("stop")));
@property (class, readonly) ESCSharingCommand *stopAndResetReplayCache __attribute__((swift_name("stopAndResetReplayCache")));
+ (ESCKotlinArray<ESCSharingCommand *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ESCSharingCommand *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("SharingStarted")))
@protocol ESCSharingStarted
@required
- (id<ESCFlow>)commandSubscriptionCount:(id<ESCStateFlow>)subscriptionCount __attribute__((swift_name("command(subscriptionCount:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingStartedCompanion")))
@interface ESCSharingStartedCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCSharingStartedCompanion *shared __attribute__((swift_name("shared")));
- (id<ESCSharingStarted>)WhileSubscribedStopTimeoutMillis:(int64_t)stopTimeoutMillis replayExpirationMillis:(int64_t)replayExpirationMillis __attribute__((swift_name("WhileSubscribed(stopTimeoutMillis:replayExpirationMillis:)")));
@property (readonly) id<ESCSharingStarted> Eagerly __attribute__((swift_name("Eagerly")));
@property (readonly) id<ESCSharingStarted> Lazily __attribute__((swift_name("Lazily")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("FusibleFlow")))
@protocol ESCFusibleFlow <ESCFlow>
@required
- (id<ESCFlow>)fuseContext:(id<ESCKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(ESCBufferOverflow *)onBufferOverflow __attribute__((swift_name("fuse(context:capacity:onBufferOverflow:)")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("ChannelFlow")))
@interface ESCChannelFlow<T> : ESCBase <ESCFusibleFlow>
- (instancetype)initWithContext:(id<ESCKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(ESCBufferOverflow *)onBufferOverflow __attribute__((swift_name("init(context:capacity:onBufferOverflow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString * _Nullable)additionalToStringProps __attribute__((swift_name("additionalToStringProps()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ESCFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)collectToScope:(id<ESCProducerScope>)scope completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectTo(scope:completionHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (ESCChannelFlow<T> *)createContext:(id<ESCKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(ESCBufferOverflow *)onBufferOverflow __attribute__((swift_name("create(context:capacity:onBufferOverflow:)")));
- (id<ESCFlow> _Nullable)dropChannelOperators __attribute__((swift_name("dropChannelOperators()")));
- (id<ESCFlow>)fuseContext:(id<ESCKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(ESCBufferOverflow *)onBufferOverflow __attribute__((swift_name("fuse(context:capacity:onBufferOverflow:)")));
- (id<ESCReceiveChannel>)produceImplScope:(id<ESCCoroutineScope>)scope __attribute__((swift_name("produceImpl(scope:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) id<ESCKotlinCoroutineContext> context __attribute__((swift_name("context")));
@property (readonly) ESCBufferOverflow *onBufferOverflow __attribute__((swift_name("onBufferOverflow")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendingCollector")))
@interface ESCSendingCollector<T> : ESCBase <ESCFlowCollector>
- (instancetype)initWithChannel:(id<ESCSendChannel>)channel __attribute__((swift_name("init(channel:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("LockFreeLinkedListNode")))
@interface ESCLockFreeLinkedListNode : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)addLastNode:(ESCLockFreeLinkedListNode *)node permissionsBitmask:(int32_t)permissionsBitmask __attribute__((swift_name("addLast(node:permissionsBitmask:)")));
- (BOOL)addOneIfEmptyNode:(ESCLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (void)closeForbiddenElementsBit:(int32_t)forbiddenElementsBit __attribute__((swift_name("close(forbiddenElementsBit:)")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) ESCLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) ESCLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("LockFreeLinkedListHead")))
@interface ESCLockFreeLinkedListHead : ESCLockFreeLinkedListNode
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)forEachBlock:(void (^)(ESCLockFreeLinkedListNode *))block __attribute__((swift_name("forEach(block:)")));
- (BOOL)remove __attribute__((swift_name("remove()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("MainDispatcherFactory")))
@protocol ESCMainDispatcherFactory
@required
- (ESCMainCoroutineDispatcher *)createDispatcherAllFactories:(NSArray<id<ESCMainDispatcherFactory>> *)allFactories __attribute__((swift_name("createDispatcher(allFactories:)")));
- (NSString * _Nullable)hintOnError __attribute__((swift_name("hintOnError()")));
@property (readonly) int32_t loadPriority __attribute__((swift_name("loadPriority")));
@end

__attribute__((swift_name("AtomicfuSynchronizedObject")))
@interface ESCAtomicfuSynchronizedObject : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)lock __attribute__((swift_name("lock()")));
- (BOOL)tryLock __attribute__((swift_name("tryLock()")));
- (void)unlock __attribute__((swift_name("unlock()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly, getter=lock_) ESCKotlinAtomicReference<ESCAtomicfuSynchronizedObjectLockState *> *lock __attribute__((swift_name("lock")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("ThreadSafeHeap")))
@interface ESCThreadSafeHeap<T> : ESCAtomicfuSynchronizedObject
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(T)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(T)node cond:(ESCBoolean *(^)(T _Nullable))cond __attribute__((swift_name("addLastIf(node:cond:)")));
- (T _Nullable)findPredicate:(ESCBoolean *(^)(T value))predicate __attribute__((swift_name("find(predicate:)")));
- (T _Nullable)peek __attribute__((swift_name("peek()")));
- (BOOL)removeNode:(T)node __attribute__((swift_name("remove(node:)")));
- (T _Nullable)removeFirstIfPredicate:(ESCBoolean *(^)(T))predicate __attribute__((swift_name("removeFirstIf(predicate:)")));
- (T _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("ThreadSafeHeapNode")))
@protocol ESCThreadSafeHeapNode
@required
@property ESCThreadSafeHeap<id> * _Nullable heap __attribute__((swift_name("heap")));
@property int32_t index __attribute__((swift_name("index")));
@end

__attribute__((swift_name("SelectBuilder")))
@protocol ESCSelectBuilder
@required
- (void)invoke:(id<ESCSelectClause0>)receiver block:(id<ESCKotlinSuspendFunction0>)block __attribute__((swift_name("invoke(_:block:)")));
- (void)invoke:(id<ESCSelectClause1>)receiver block_:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:block_:)")));
- (void)invoke:(id<ESCSelectClause2>)receiver block__:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:block__:)")));
- (void)invoke:(id<ESCSelectClause2>)receiver param:(id _Nullable)param block:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:param:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)onTimeoutTimeMillis:(int64_t)timeMillis block:(id<ESCKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(timeMillis:block:)"))) __attribute__((unavailable("Replaced with the same extension function")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("SelectClause")))
@protocol ESCSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) ESCKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<ESCSelectInstance> select, id _Nullable param, id _Nullable internalResult))(ESCKotlinThrowable *, id _Nullable, id<ESCKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id clauseObject, id _Nullable param, id _Nullable clauseResult) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id clauseObject, id<ESCSelectInstance> select, id _Nullable param) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("SelectClause0")))
@protocol ESCSelectClause0 <ESCSelectClause>
@required
@end

__attribute__((swift_name("SelectClause1")))
@protocol ESCSelectClause1 <ESCSelectClause>
@required
@end

__attribute__((swift_name("SelectClause2")))
@protocol ESCSelectClause2 <ESCSelectClause>
@required
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("SelectInstance")))
@protocol ESCSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<ESCDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<ESCKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((swift_name("Mutex")))
@protocol ESCMutex
@required
- (BOOL)holdsLockOwner:(id)owner __attribute__((swift_name("holdsLock(owner:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)lockOwner:(id _Nullable)owner completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("lock(owner:completionHandler:)")));
- (BOOL)tryLockOwner:(id _Nullable)owner __attribute__((swift_name("tryLock(owner:)")));
- (void)unlockOwner:(id _Nullable)owner __attribute__((swift_name("unlock(owner:)")));
@property (readonly) BOOL isLocked __attribute__((swift_name("isLocked")));
@property (readonly) id<ESCSelectClause2> onLock __attribute__((swift_name("onLock"))) __attribute__((deprecated("Mutex.onLock deprecated without replacement. For additional details please refer to #2794")));
@end

__attribute__((swift_name("Semaphore")))
@protocol ESCSemaphore
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)acquireWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("acquire(completionHandler:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (BOOL)tryAcquire __attribute__((swift_name("tryAcquire()")));
@property (readonly) int32_t availablePermits __attribute__((swift_name("availablePermits")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface ESCKotlinArray<T> : ESCBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(ESCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<ESCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface ESCKotlinArray (Extensions)
- (id<ESCFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface ESCKotlinIntArray : ESCBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ESCInt *(^)(ESCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ESCKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface ESCKotlinIntArray (Extensions)
- (id<ESCFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface ESCKotlinLongArray : ESCBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ESCLong *(^)(ESCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ESCKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface ESCKotlinLongArray (Extensions)
- (id<ESCFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol ESCKotlinIterable
@required
- (id<ESCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface ESCKotlinIntProgression : ESCBase <ESCKotlinIterable>
@property (class, readonly, getter=companion) ESCKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (ESCKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol ESCKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol ESCKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface ESCKotlinIntRange : ESCKotlinIntProgression <ESCKotlinClosedRange, ESCKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(ESCInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(ESCInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@property (readonly) ESCInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) ESCInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) ESCInt *start __attribute__((swift_name("start")));
@end

@interface ESCKotlinIntRange (Extensions)
- (id<ESCFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end

__attribute__((swift_name("KotlinLongProgression")))
@interface ESCKotlinLongProgression : ESCBase <ESCKotlinIterable>
@property (class, readonly, getter=companion) ESCKotlinLongProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (ESCKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t first __attribute__((swift_name("first")));
@property (readonly) int64_t last __attribute__((swift_name("last")));
@property (readonly) int64_t step __attribute__((swift_name("step")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange")))
@interface ESCKotlinLongRange : ESCKotlinLongProgression <ESCKotlinClosedRange, ESCKotlinOpenEndRange>
- (instancetype)initWithStart:(int64_t)start endInclusive:(int64_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKotlinLongRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(ESCLong *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(ESCLong *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@property (readonly) ESCLong *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Long type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) ESCLong *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) ESCLong *start __attribute__((swift_name("start")));
@end

@interface ESCKotlinLongRange (Extensions)
- (id<ESCFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end

@interface ESCCoroutineDispatcher (Extensions)

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeBlock:(id<ESCKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(block:completionHandler:)")));
@end

@interface ESCDispatchers (Extensions)
@property (readonly) ESCCoroutineDispatcher *IO __attribute__((swift_name("IO")));
@end

@interface ESCSharingStartedCompanion (Extensions)
- (id<ESCSharingStarted>)WhileSubscribedStopTimeout:(int64_t)stopTimeout replayExpiration:(int64_t)replayExpiration __attribute__((swift_name("WhileSubscribed(stopTimeout:replayExpiration:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwaitKt")))
@interface ESCAwaitKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitAll:(id)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitAll(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitAllDeferreds:(ESCKotlinArray<id<ESCDeferred>> *)deferreds completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitAll(deferreds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)joinAll:(id)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("joinAll(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)joinAllJobs:(ESCKotlinArray<id<ESCJob>> *)jobs completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("joinAll(jobs:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BroadcastKt")))
@interface ESCBroadcastKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
+ (id<ESCBroadcastChannel>)broadcast:(id<ESCReceiveChannel>)receiver capacity:(int32_t)capacity start:(ESCCoroutineStart *)start __attribute__((swift_name("broadcast(_:capacity:start:)"))) __attribute__((unavailable("BroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));

/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
+ (id<ESCBroadcastChannel>)broadcast:(id<ESCCoroutineScope>)receiver context:(id<ESCKotlinCoroutineContext>)context capacity:(int32_t)capacity start:(ESCCoroutineStart *)start onCompletion:(void (^ _Nullable)(ESCKotlinThrowable * _Nullable cause))onCompletion block:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("broadcast(_:context:capacity:start:onCompletion:block:)"))) __attribute__((unavailable("BroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BroadcastChannelKt")))
@interface ESCBroadcastChannelKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
+ (id<ESCBroadcastChannel>)BroadcastChannelCapacity:(int32_t)capacity __attribute__((swift_name("BroadcastChannel(capacity:)"))) __attribute__((unavailable("BroadcastChannel is deprecated in the favour of SharedFlow and StateFlow, and is no longer supported")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Builders_commonKt")))
@interface ESCBuilders_commonKt : ESCBase
+ (id<ESCDeferred>)async:(id<ESCCoroutineScope>)receiver context:(id<ESCKotlinCoroutineContext>)context start:(ESCCoroutineStart *)start block:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("async(_:context:start:block:)")));
+ (id<ESCJob>)launch:(id<ESCCoroutineScope>)receiver context:(id<ESCKotlinCoroutineContext>)context start:(ESCCoroutineStart *)start block:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("launch(_:context:start:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withContextContext:(id<ESCKotlinCoroutineContext>)context block:(id<ESCKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withContext(context:block:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildersKt")))
@interface ESCBuildersKt : ESCBase
+ (id<ESCFlow>)asFlow:(id _Nullable (^)(void))receiver __attribute__((swift_name("asFlow(_:)")));
+ (id<ESCFlow>)asFlow_:(id)receiver __attribute__((swift_name("asFlow(__:)")));
+ (id<ESCFlow>)asFlow__:(id<ESCKotlinIterator>)receiver __attribute__((swift_name("asFlow(___:)")));
+ (id<ESCFlow>)asFlow___:(id<ESCKotlinSuspendFunction0>)receiver __attribute__((swift_name("asFlow(____:)")));
+ (id<ESCFlow>)asFlow____:(id<ESCKotlinSequence>)receiver __attribute__((swift_name("asFlow(_____:)")));
+ (id<ESCFlow>)callbackFlowBlock:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("callbackFlow(block:)")));
+ (id<ESCFlow>)channelFlowBlock:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("channelFlow(block:)")));
+ (id<ESCFlow>)emptyFlow __attribute__((swift_name("emptyFlow()")));
+ (id<ESCFlow>)flowBlock:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("flow(block:)")));
+ (id<ESCFlow>)flowOfValue:(id _Nullable)value __attribute__((swift_name("flowOf(value:)")));
+ (id<ESCFlow>)flowOfElements:(ESCKotlinArray<id> *)elements __attribute__((swift_name("flowOf(elements:)")));
+ (id _Nullable)runBlockingContext:(id<ESCKotlinCoroutineContext>)context block:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("runBlocking(context:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellableKt")))
@interface ESCCancellableKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
+ (void)startCoroutineCancellable:(id<ESCKotlinSuspendFunction0>)receiver completion:(id<ESCKotlinContinuation>)completion __attribute__((swift_name("startCoroutineCancellable(_:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellableContinuationKt")))
@interface ESCCancellableContinuationKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
+ (void)disposeOnCancellation:(id<ESCCancellableContinuation>)receiver handle:(id<ESCDisposableHandle>)handle __attribute__((swift_name("disposeOnCancellation(_:handle:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)suspendCancellableCoroutineBlock:(void (^)(id<ESCCancellableContinuation>))block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("suspendCancellableCoroutine(block:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelKt")))
@interface ESCChannelKt : ESCBase
+ (id<ESCChannel>)ChannelCapacity:(int32_t)capacity onBufferOverflow:(ESCBufferOverflow *)onBufferOverflow onUndeliveredElement:(void (^ _Nullable)(id _Nullable))onUndeliveredElement __attribute__((swift_name("Channel(capacity:onBufferOverflow:onUndeliveredElement:)")));
+ (id _Nullable)getOrElse:(id _Nullable)receiver onFailure:(id _Nullable (^)(ESCKotlinThrowable * _Nullable exception))onFailure __attribute__((swift_name("getOrElse(_:onFailure:)")));
+ (id _Nullable)onClosed:(id _Nullable)receiver action:(void (^)(ESCKotlinThrowable * _Nullable exception))action __attribute__((swift_name("onClosed(_:action:)")));
+ (id _Nullable)onFailure:(id _Nullable)receiver action:(void (^)(ESCKotlinThrowable * _Nullable exception))action __attribute__((swift_name("onFailure(_:action:)")));
+ (id _Nullable)onSuccess:(id _Nullable)receiver action:(void (^)(id _Nullable value))action __attribute__((swift_name("onSuccess(_:action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Channels_commonKt")))
@interface ESCChannels_commonKt : ESCBase
+ (id _Nullable)consume:(id<ESCReceiveChannel>)receiver block:(id _Nullable (^)(id<ESCReceiveChannel>))block __attribute__((swift_name("consume(_:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)consumeEach:(id<ESCReceiveChannel>)receiver action:(void (^)(id _Nullable))action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("consumeEach(_:action:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<ESCReceiveChannel>)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelsKt")))
@interface ESCChannelsKt : ESCBase
+ (id<ESCFlow>)consumeAsFlow:(id<ESCReceiveChannel>)receiver __attribute__((swift_name("consumeAsFlow(_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)emitAll:(id<ESCFlowCollector>)receiver channel:(id<ESCReceiveChannel>)channel completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emitAll(_:channel:completionHandler:)")));
+ (id<ESCReceiveChannel>)produceIn:(id<ESCFlow>)receiver scope:(id<ESCCoroutineScope>)scope __attribute__((swift_name("produceIn(_:scope:)")));
+ (id<ESCFlow>)receiveAsFlow:(id<ESCReceiveChannel>)receiver __attribute__((swift_name("receiveAsFlow(_:)")));
+ (id _Nullable)trySendBlocking:(id<ESCSendChannel>)receiver element:(id _Nullable)element __attribute__((swift_name("trySendBlocking(_:element:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectKt")))
@interface ESCCollectKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collect:(id<ESCFlow>)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collectIndexed:(id<ESCFlow>)receiver action:(id<ESCKotlinSuspendFunction2>)action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectIndexed(_:action:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collectLatest:(id<ESCFlow>)receiver action:(id<ESCKotlinSuspendFunction1>)action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectLatest(_:action:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)emitAll:(id<ESCFlowCollector>)receiver flow:(id<ESCFlow>)flow completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emitAll(_:flow:completionHandler:)")));
+ (id<ESCJob>)launchIn:(id<ESCFlow>)receiver scope:(id<ESCCoroutineScope>)scope __attribute__((swift_name("launchIn(_:scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionKt")))
@interface ESCCollectionKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toCollection:(id<ESCFlow>)receiver destination:(id)destination completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toCollection(_:destination:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<ESCFlow>)receiver destination:(NSMutableArray<id> *)destination completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:destination:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<ESCFlow>)receiver destination:(ESCMutableSet<id> *)destination completionHandler:(void (^)(NSSet<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:destination:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompletableDeferredKt")))
@interface ESCCompletableDeferredKt : ESCBase
+ (id<ESCCompletableDeferred>)CompletableDeferredValue:(id _Nullable)value __attribute__((swift_name("CompletableDeferred(value:)")));
+ (id<ESCCompletableDeferred>)CompletableDeferredParent:(id<ESCJob> _Nullable)parent __attribute__((swift_name("CompletableDeferred(parent:)")));
+ (BOOL)completeWith:(id<ESCCompletableDeferred>)receiver result:(id _Nullable)result __attribute__((swift_name("completeWith(_:result:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextKt")))
@interface ESCContextKt : ESCBase
+ (id<ESCFlow>)buffer:(id<ESCFlow>)receiver capacity:(int32_t)capacity onBufferOverflow:(ESCBufferOverflow *)onBufferOverflow __attribute__((swift_name("buffer(_:capacity:onBufferOverflow:)")));
+ (id<ESCFlow>)cancellable:(id<ESCFlow>)receiver __attribute__((swift_name("cancellable(_:)")));
+ (id<ESCFlow>)conflate:(id<ESCFlow>)receiver __attribute__((swift_name("conflate(_:)")));
+ (id<ESCFlow>)flowOn:(id<ESCFlow>)receiver context:(id<ESCKotlinCoroutineContext>)context __attribute__((swift_name("flowOn(_:context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineContextKt")))
@interface ESCCoroutineContextKt : ESCBase
+ (id<ESCKotlinCoroutineContext>)doNewCoroutineContext:(id<ESCKotlinCoroutineContext>)receiver addedContext:(id<ESCKotlinCoroutineContext>)addedContext __attribute__((swift_name("doNewCoroutineContext(_:addedContext:)")));
+ (id<ESCKotlinCoroutineContext>)doNewCoroutineContext:(id<ESCCoroutineScope>)receiver context:(id<ESCKotlinCoroutineContext>)context __attribute__((swift_name("doNewCoroutineContext(_:context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineExceptionHandlerKt")))
@interface ESCCoroutineExceptionHandlerKt : ESCBase
+ (id<ESCCoroutineExceptionHandler>)CoroutineExceptionHandlerHandler:(void (^)(id<ESCKotlinCoroutineContext>, ESCKotlinThrowable *))handler __attribute__((swift_name("CoroutineExceptionHandler(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
+ (void)handleCoroutineExceptionContext:(id<ESCKotlinCoroutineContext>)context exception:(ESCKotlinThrowable *)exception __attribute__((swift_name("handleCoroutineException(context:exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineScopeKt")))
@interface ESCCoroutineScopeKt : ESCBase
+ (BOOL)isActive:(id<ESCCoroutineScope>)receiver __attribute__((swift_name("isActive(_:)")));
+ (id<ESCCoroutineScope>)CoroutineScopeContext:(id<ESCKotlinCoroutineContext>)context __attribute__((swift_name("CoroutineScope(context:)")));
+ (id<ESCCoroutineScope>)MainScope __attribute__((swift_name("MainScope()")));
+ (void)cancel:(id<ESCCoroutineScope>)receiver cause:(ESCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)")));
+ (void)cancel:(id<ESCCoroutineScope>)receiver message:(NSString *)message cause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(_:message:cause:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)coroutineScopeBlock:(id<ESCKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("coroutineScope(block:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)currentCoroutineContextWithCompletionHandler:(void (^)(id<ESCKotlinCoroutineContext> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("currentCoroutineContext(completionHandler:)")));
+ (void)ensureActive:(id<ESCCoroutineScope>)receiver __attribute__((swift_name("ensureActive(_:)")));
+ (id<ESCCoroutineScope>)plus:(id<ESCCoroutineScope>)receiver context:(id<ESCKotlinCoroutineContext>)context __attribute__((swift_name("plus(_:context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountKt")))
@interface ESCCountKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<ESCFlow>)receiver completionHandler:(void (^)(ESCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<ESCFlow>)receiver predicate:(id<ESCKotlinSuspendFunction1>)predicate completionHandler:(void (^)(ESCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:predicate:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DelayKt")))
@interface ESCDelayKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitCancellationWithCompletionHandler:(void (^)(ESCKotlinNothing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitCancellation(completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<ESCFlow>)debounce:(id<ESCFlow>)receiver timeoutMillis:(ESCLong *(^)(id _Nullable))timeoutMillis __attribute__((swift_name("debounce(_:timeoutMillis:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
 *   kotlin.jvm.JvmName(name="debounceDuration")
*/
+ (id<ESCFlow>)debounce:(id<ESCFlow>)receiver timeout:(id (^)(id _Nullable))timeout __attribute__((swift_name("debounce(_:timeout:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<ESCFlow>)debounce:(id<ESCFlow>)receiver timeoutMillis_:(int64_t)timeoutMillis __attribute__((swift_name("debounce(_:timeoutMillis_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<ESCFlow>)debounce:(id<ESCFlow>)receiver timeout_:(int64_t)timeout __attribute__((swift_name("debounce(_:timeout_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)delayTimeMillis:(int64_t)timeMillis completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(timeMillis:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)delayDuration:(int64_t)duration completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(duration:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<ESCFlow>)sample:(id<ESCFlow>)receiver periodMillis:(int64_t)periodMillis __attribute__((swift_name("sample(_:periodMillis:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<ESCFlow>)sample:(id<ESCFlow>)receiver period:(int64_t)period __attribute__((swift_name("sample(_:period:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<ESCFlow>)timeout:(id<ESCFlow>)receiver timeout:(int64_t)timeout __attribute__((swift_name("timeout(_:timeout:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeprecatedKt")))
@interface ESCDeprecatedKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
+ (id _Nullable)consume:(id<ESCBroadcastChannel>)receiver block:(id _Nullable (^)(id<ESCReceiveChannel>))block __attribute__((swift_name("consume(_:block:)"))) __attribute__((unavailable("BroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)consumeEach:(id<ESCBroadcastChannel>)receiver action:(void (^)(id _Nullable))action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("consumeEach(_:action:completionHandler:)"))) __attribute__((unavailable("BroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchedContinuationKt")))
@interface ESCDispatchedContinuationKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
+ (void)resumeCancellableWith:(id<ESCKotlinContinuation>)receiver result:(id _Nullable)result __attribute__((swift_name("resumeCancellableWith(_:result:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DistinctKt")))
@interface ESCDistinctKt : ESCBase
+ (id<ESCFlow>)distinctUntilChanged:(id<ESCFlow>)receiver __attribute__((swift_name("distinctUntilChanged(_:)")));
+ (id<ESCFlow>)distinctUntilChanged:(id<ESCFlow>)receiver areEquivalent:(ESCBoolean *(^)(id _Nullable old, id _Nullable new_))areEquivalent __attribute__((swift_name("distinctUntilChanged(_:areEquivalent:)")));
+ (id<ESCFlow>)distinctUntilChangedBy:(id<ESCFlow>)receiver keySelector:(id _Nullable (^)(id _Nullable))keySelector __attribute__((swift_name("distinctUntilChangedBy(_:keySelector:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCFlowKt")))
@interface ESCEKYCFlowKt : ESCBase
+ (void)startEkycController:(UIViewController *)controller onResult:(void (^)(NSString * _Nullable))onResult __attribute__((swift_name("startEkyc(controller:onResult:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmittersKt")))
@interface ESCEmittersKt : ESCBase
+ (id<ESCFlow>)onCompletion:(id<ESCFlow>)receiver action:(id<ESCKotlinSuspendFunction2>)action __attribute__((swift_name("onCompletion(_:action:)")));
+ (id<ESCFlow>)onEmpty:(id<ESCFlow>)receiver action:(id<ESCKotlinSuspendFunction1>)action __attribute__((swift_name("onEmpty(_:action:)")));
+ (id<ESCFlow>)onStart:(id<ESCFlow>)receiver action:(id<ESCKotlinSuspendFunction1>)action __attribute__((swift_name("onStart(_:action:)")));
+ (id<ESCFlow>)transform:(id<ESCFlow>)receiver transform:(id<ESCKotlinSuspendFunction2>)transform __attribute__((swift_name("transform(_:transform:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorsKt")))
@interface ESCErrorsKt : ESCBase
+ (id<ESCFlow>)catch:(id<ESCFlow>)receiver action:(id<ESCKotlinSuspendFunction2>)action __attribute__((swift_name("catch(_:action:)")));
+ (id<ESCFlow>)retry:(id<ESCFlow>)receiver retries:(int64_t)retries predicate:(id<ESCKotlinSuspendFunction1>)predicate __attribute__((swift_name("retry(_:retries:predicate:)")));
+ (id<ESCFlow>)retryWhen:(id<ESCFlow>)receiver predicate:(id<ESCKotlinSuspendFunction3>)predicate __attribute__((swift_name("retryWhen(_:predicate:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExceptionsKt")))
@interface ESCExceptionsKt : ESCBase
+ (ESCKotlinCancellationException *)CancellationExceptionMessage:(NSString * _Nullable)message cause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("CancellationException(message:cause:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobKt")))
@interface ESCJobKt : ESCBase
+ (BOOL)isActive:(id<ESCKotlinCoroutineContext>)receiver __attribute__((swift_name("isActive(_:)")));
+ (id<ESCJob>)job:(id<ESCKotlinCoroutineContext>)receiver __attribute__((swift_name("job(_:)")));
+ (id<ESCCompletableJob>)JobParent:(id<ESCJob> _Nullable)parent __attribute__((swift_name("Job(parent:)")));
+ (void)cancel:(id<ESCKotlinCoroutineContext>)receiver cause:(ESCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)")));
+ (void)cancel:(id<ESCJob>)receiver message:(NSString *)message cause:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(_:message:cause:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)cancelAndJoin:(id<ESCJob>)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("cancelAndJoin(_:completionHandler:)")));
+ (void)cancelChildren:(id<ESCKotlinCoroutineContext>)receiver cause:(ESCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancelChildren(_:cause:)")));
+ (void)cancelChildren:(id<ESCJob>)receiver cause_:(ESCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancelChildren(_:cause_:)")));
+ (void)ensureActive:(id<ESCKotlinCoroutineContext>)receiver __attribute__((swift_name("ensureActive(_:)")));
+ (void)ensureActive_:(id<ESCJob>)receiver __attribute__((swift_name("ensureActive(__:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinKt")))
@interface ESCKoinKt : ESCBase
+ (void)doInitKoin __attribute__((swift_name("doInitKoin()")));
@property (class, readonly) ESCKoin_coreModule *appModule __attribute__((swift_name("appModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LimitKt")))
@interface ESCLimitKt : ESCBase
+ (id<ESCFlow>)drop:(id<ESCFlow>)receiver count:(int32_t)count __attribute__((swift_name("drop(_:count:)")));
+ (id<ESCFlow>)dropWhile:(id<ESCFlow>)receiver predicate:(id<ESCKotlinSuspendFunction1>)predicate __attribute__((swift_name("dropWhile(_:predicate:)")));
+ (id<ESCFlow>)take:(id<ESCFlow>)receiver count:(int32_t)count __attribute__((swift_name("take(_:count:)")));
+ (id<ESCFlow>)takeWhile:(id<ESCFlow>)receiver predicate:(id<ESCKotlinSuspendFunction1>)predicate __attribute__((swift_name("takeWhile(_:predicate:)")));
+ (id<ESCFlow>)transformWhile:(id<ESCFlow>)receiver transform:(id<ESCKotlinSuspendFunction2>)transform __attribute__((swift_name("transformWhile(_:transform:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LintKt")))
@interface ESCLintKt : ESCBase
+ (id<ESCKotlinCoroutineContext>)coroutineContext:(id<ESCFlowCollector>)receiver __attribute__((swift_name("coroutineContext(_:)"))) __attribute__((unavailable("coroutineContext is resolved into the property of outer CoroutineScope which is likely to be an error. Use currentCoroutineContext() instead or specify the receiver of coroutineContext explicitly")));
+ (BOOL)isActive:(id<ESCFlowCollector>)receiver __attribute__((swift_name("isActive(_:)"))) __attribute__((unavailable("isActive is resolved into the extension of outer CoroutineScope which is likely to be an error. Use currentCoroutineContext().isActive or cancellable() operator instead or specify the receiver of isActive explicitly. Additionally, flow {} builder emissions are cancellable by default.")));
+ (void)cancel:(id<ESCFlowCollector>)receiver cause:(ESCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)"))) __attribute__((unavailable("cancel() is resolved into the extension of outer CoroutineScope which is likely to be an error. Use currentCoroutineContext().cancel() instead or specify the receiver of cancel() explicitly")));
+ (id<ESCFlow>)cancellable:(id<ESCSharedFlow>)receiver __attribute__((swift_name("cancellable(_:)"))) __attribute__((unavailable("Applying 'cancellable' to a SharedFlow has no effect. See the SharedFlow documentation on Operator Fusion.")));
+ (id<ESCFlow>)catch:(id<ESCSharedFlow>)receiver action:(id<ESCKotlinSuspendFunction2>)action __attribute__((swift_name("catch(_:action:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator typically has not effect, it can only catch exceptions from 'onSubscribe' operator")));
+ (id<ESCFlow>)conflate:(id<ESCStateFlow>)receiver __attribute__((swift_name("conflate(_:)"))) __attribute__((unavailable("Applying 'conflate' to StateFlow has no effect. See the StateFlow documentation on Operator Fusion.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<ESCSharedFlow>)receiver completionHandler:(void (^)(ESCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));
+ (id<ESCFlow>)distinctUntilChanged:(id<ESCStateFlow>)receiver __attribute__((swift_name("distinctUntilChanged(_:)"))) __attribute__((unavailable("Applying 'distinctUntilChanged' to StateFlow has no effect. See the StateFlow documentation on Operator Fusion.")));
+ (id<ESCFlow>)flowOn:(id<ESCSharedFlow>)receiver context:(id<ESCKotlinCoroutineContext>)context __attribute__((swift_name("flowOn(_:context:)"))) __attribute__((unavailable("Applying 'flowOn' to SharedFlow has no effect. See the SharedFlow documentation on Operator Fusion.")));
+ (id<ESCFlow>)retry:(id<ESCSharedFlow>)receiver retries:(int64_t)retries predicate:(id<ESCKotlinSuspendFunction1>)predicate __attribute__((swift_name("retry(_:retries:predicate:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator has no effect.")));
+ (id<ESCFlow>)retryWhen:(id<ESCSharedFlow>)receiver predicate:(id<ESCKotlinSuspendFunction3>)predicate __attribute__((swift_name("retryWhen(_:predicate:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator has no effect.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<ESCSharedFlow>)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<ESCSharedFlow>)receiver destination:(NSMutableArray<id> *)destination completionHandler:(void (^)(ESCKotlinNothing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:destination:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<ESCSharedFlow>)receiver completionHandler:(void (^)(NSSet<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<ESCSharedFlow>)receiver destination:(ESCMutableSet<id> *)destination completionHandler:(void (^)(ESCKotlinNothing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:destination:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogicKt")))
@interface ESCLogicKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)all:(id<ESCFlow>)receiver predicate:(id<ESCKotlinSuspendFunction1>)predicate completionHandler:(void (^)(ESCBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("all(_:predicate:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)any:(id<ESCFlow>)receiver predicate:(id<ESCKotlinSuspendFunction1>)predicate completionHandler:(void (^)(ESCBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("any(_:predicate:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)none:(id<ESCFlow>)receiver predicate:(id<ESCKotlinSuspendFunction1>)predicate completionHandler:(void (^)(ESCBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("none(_:predicate:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MergeKt")))
@interface ESCMergeKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<ESCFlow>)flatMapConcat:(id<ESCFlow>)receiver transform:(id<ESCKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapConcat(_:transform:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<ESCFlow>)flatMapLatest:(id<ESCFlow>)receiver transform:(id<ESCKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapLatest(_:transform:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<ESCFlow>)flatMapMerge:(id<ESCFlow>)receiver concurrency:(int32_t)concurrency transform:(id<ESCKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapMerge(_:concurrency:transform:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<ESCFlow>)flattenConcat:(id<ESCFlow>)receiver __attribute__((swift_name("flattenConcat(_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<ESCFlow>)flattenMerge:(id<ESCFlow>)receiver concurrency:(int32_t)concurrency __attribute__((swift_name("flattenMerge(_:concurrency:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<ESCFlow>)mapLatest:(id<ESCFlow>)receiver transform:(id<ESCKotlinSuspendFunction1>)transform __attribute__((swift_name("mapLatest(_:transform:)")));
+ (id<ESCFlow>)merge:(id)receiver __attribute__((swift_name("merge(_:)")));
+ (id<ESCFlow>)mergeFlows:(ESCKotlinArray<id<ESCFlow>> *)flows __attribute__((swift_name("merge(flows:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<ESCFlow>)transformLatest:(id<ESCFlow>)receiver transform:(id<ESCKotlinSuspendFunction2>)transform __attribute__((swift_name("transformLatest(_:transform:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
@property (class, readonly) int32_t DEFAULT_CONCURRENCY __attribute__((swift_name("DEFAULT_CONCURRENCY")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
@property (class, readonly) NSString *DEFAULT_CONCURRENCY_PROPERTY_NAME __attribute__((swift_name("DEFAULT_CONCURRENCY_PROPERTY_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MigrationKt")))
@interface ESCMigrationKt : ESCBase
+ (id<ESCFlow>)cache:(id<ESCFlow>)receiver __attribute__((swift_name("cache(_:)"))) __attribute__((unavailable("Flow analogue of 'cache()' is 'shareIn' with unlimited replay and 'started = SharingStarted.Lazily' argument'")));
+ (id<ESCFlow>)combineLatest:(id<ESCFlow>)receiver other:(id<ESCFlow>)other transform:(id<ESCKotlinSuspendFunction2>)transform __attribute__((swift_name("combineLatest(_:other:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<ESCFlow>)combineLatest:(id<ESCFlow>)receiver other:(id<ESCFlow>)other other2:(id<ESCFlow>)other2 transform:(id<ESCKotlinSuspendFunction3>)transform __attribute__((swift_name("combineLatest(_:other:other2:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<ESCFlow>)combineLatest:(id<ESCFlow>)receiver other:(id<ESCFlow>)other other2:(id<ESCFlow>)other2 other3:(id<ESCFlow>)other3 transform:(id<ESCKotlinSuspendFunction4>)transform __attribute__((swift_name("combineLatest(_:other:other2:other3:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<ESCFlow>)combineLatest:(id<ESCFlow>)receiver other:(id<ESCFlow>)other other2:(id<ESCFlow>)other2 other3:(id<ESCFlow>)other3 other4:(id<ESCFlow>)other4 transform:(id<ESCKotlinSuspendFunction5>)transform __attribute__((swift_name("combineLatest(_:other:other2:other3:other4:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<ESCFlow>)compose:(id<ESCFlow>)receiver transformer:(id<ESCFlow> (^)(id<ESCFlow>))transformer __attribute__((swift_name("compose(_:transformer:)"))) __attribute__((unavailable("Flow analogue of 'compose' is 'let'")));
+ (id<ESCFlow>)concatMap:(id<ESCFlow>)receiver mapper:(id<ESCFlow> (^)(id _Nullable))mapper __attribute__((swift_name("concatMap(_:mapper:)"))) __attribute__((unavailable("Flow analogue of 'concatMap' is 'flatMapConcat'")));
+ (id<ESCFlow>)concatWith:(id<ESCFlow>)receiver value:(id _Nullable)value __attribute__((swift_name("concatWith(_:value:)"))) __attribute__((unavailable("Flow analogue of 'concatWith' is 'onCompletion'. Use 'onCompletion { emit(value) }'")));
+ (id<ESCFlow>)concatWith:(id<ESCFlow>)receiver other:(id<ESCFlow>)other __attribute__((swift_name("concatWith(_:other:)"))) __attribute__((unavailable("Flow analogue of 'concatWith' is 'onCompletion'. Use 'onCompletion { if (it == null) emitAll(other) }'")));
+ (id<ESCFlow>)delayEach:(id<ESCFlow>)receiver timeMillis:(int64_t)timeMillis __attribute__((swift_name("delayEach(_:timeMillis:)"))) __attribute__((unavailable("Use 'onEach { delay(timeMillis) }'")));
+ (id<ESCFlow>)delayFlow:(id<ESCFlow>)receiver timeMillis:(int64_t)timeMillis __attribute__((swift_name("delayFlow(_:timeMillis:)"))) __attribute__((unavailable("Use 'onStart { delay(timeMillis) }'")));
+ (id<ESCFlow>)flatMap:(id<ESCFlow>)receiver mapper:(id<ESCKotlinSuspendFunction1>)mapper __attribute__((swift_name("flatMap(_:mapper:)"))) __attribute__((unavailable("Flow analogue is 'flatMapConcat'")));
+ (id<ESCFlow>)flatten:(id<ESCFlow>)receiver __attribute__((swift_name("flatten(_:)"))) __attribute__((unavailable("Flow analogue of 'flatten' is 'flattenConcat'")));
+ (void)forEach:(id<ESCFlow>)receiver action:(id<ESCKotlinSuspendFunction1>)action __attribute__((swift_name("forEach(_:action:)"))) __attribute__((unavailable("Flow analogue of 'forEach' is 'collect'")));
+ (id<ESCFlow>)merge:(id<ESCFlow>)receiver __attribute__((swift_name("merge(_:)"))) __attribute__((unavailable("Flow analogue of 'merge' is 'flattenConcat'")));
+ (id<ESCFlow>)observeOn:(id<ESCFlow>)receiver context:(id<ESCKotlinCoroutineContext>)context __attribute__((swift_name("observeOn(_:context:)"))) __attribute__((unavailable("Collect flow in the desired context instead")));
+ (id<ESCFlow>)onErrorResume:(id<ESCFlow>)receiver fallback:(id<ESCFlow>)fallback __attribute__((swift_name("onErrorResume(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emitAll(fallback) }'")));
+ (id<ESCFlow>)onErrorResumeNext:(id<ESCFlow>)receiver fallback:(id<ESCFlow>)fallback __attribute__((swift_name("onErrorResumeNext(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emitAll(fallback) }'")));
+ (id<ESCFlow>)onErrorReturn:(id<ESCFlow>)receiver fallback:(id _Nullable)fallback __attribute__((swift_name("onErrorReturn(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emit(fallback) }'")));
+ (id<ESCFlow>)onErrorReturn:(id<ESCFlow>)receiver fallback:(id _Nullable)fallback predicate:(ESCBoolean *(^)(ESCKotlinThrowable *))predicate __attribute__((swift_name("onErrorReturn(_:fallback:predicate:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { e -> if (predicate(e)) emit(fallback) else throw e }'")));
+ (id<ESCFlow>)publish:(id<ESCFlow>)receiver __attribute__((swift_name("publish(_:)"))) __attribute__((unavailable("Flow analogue of 'publish()' is 'shareIn'. \npublish().connect() is the default strategy (no extra call is needed), \npublish().autoConnect() translates to 'started = SharingStarted.Lazily' argument, \npublish().refCount() translates to 'started = SharingStarted.WhileSubscribed()' argument.")));
+ (id<ESCFlow>)publish:(id<ESCFlow>)receiver bufferSize:(int32_t)bufferSize __attribute__((swift_name("publish(_:bufferSize:)"))) __attribute__((unavailable("Flow analogue of 'publish(bufferSize)' is 'buffer' followed by 'shareIn'. \npublish().connect() is the default strategy (no extra call is needed), \npublish().autoConnect() translates to 'started = SharingStarted.Lazily' argument, \npublish().refCount() translates to 'started = SharingStarted.WhileSubscribed()' argument.")));
+ (id<ESCFlow>)publishOn:(id<ESCFlow>)receiver context:(id<ESCKotlinCoroutineContext>)context __attribute__((swift_name("publishOn(_:context:)"))) __attribute__((unavailable("Collect flow in the desired context instead")));
+ (id<ESCFlow>)replay:(id<ESCFlow>)receiver __attribute__((swift_name("replay(_:)"))) __attribute__((unavailable("Flow analogue of 'replay()' is 'shareIn' with unlimited replay. \nreplay().connect() is the default strategy (no extra call is needed), \nreplay().autoConnect() translates to 'started = SharingStarted.Lazily' argument, \nreplay().refCount() translates to 'started = SharingStarted.WhileSubscribed()' argument.")));
+ (id<ESCFlow>)replay:(id<ESCFlow>)receiver bufferSize:(int32_t)bufferSize __attribute__((swift_name("replay(_:bufferSize:)"))) __attribute__((unavailable("Flow analogue of 'replay(bufferSize)' is 'shareIn' with the specified replay parameter. \nreplay().connect() is the default strategy (no extra call is needed), \nreplay().autoConnect() translates to 'started = SharingStarted.Lazily' argument, \nreplay().refCount() translates to 'started = SharingStarted.WhileSubscribed()' argument.")));
+ (id<ESCFlow>)scanFold:(id<ESCFlow>)receiver initial:(id _Nullable)initial operation:(id<ESCKotlinSuspendFunction2>)operation __attribute__((swift_name("scanFold(_:initial:operation:)"))) __attribute__((unavailable("Flow has less verbose 'scan' shortcut")));
+ (id<ESCFlow>)scanReduce:(id<ESCFlow>)receiver operation:(id<ESCKotlinSuspendFunction2>)operation __attribute__((swift_name("scanReduce(_:operation:)"))) __attribute__((unavailable("'scanReduce' was renamed to 'runningReduce' to be consistent with Kotlin standard library")));
+ (id<ESCFlow>)skip:(id<ESCFlow>)receiver count:(int32_t)count __attribute__((swift_name("skip(_:count:)"))) __attribute__((unavailable("Flow analogue of 'skip' is 'drop'")));
+ (id<ESCFlow>)startWith:(id<ESCFlow>)receiver value:(id _Nullable)value __attribute__((swift_name("startWith(_:value:)"))) __attribute__((unavailable("Flow analogue of 'startWith' is 'onStart'. Use 'onStart { emit(value) }'")));
+ (id<ESCFlow>)startWith:(id<ESCFlow>)receiver other:(id<ESCFlow>)other __attribute__((swift_name("startWith(_:other:)"))) __attribute__((unavailable("Flow analogue of 'startWith' is 'onStart'. Use 'onStart { emitAll(other) }'")));
+ (void)subscribe:(id<ESCFlow>)receiver __attribute__((swift_name("subscribe(_:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (void)subscribe:(id<ESCFlow>)receiver onEach:(id<ESCKotlinSuspendFunction1>)onEach __attribute__((swift_name("subscribe(_:onEach:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (void)subscribe:(id<ESCFlow>)receiver onEach:(id<ESCKotlinSuspendFunction1>)onEach onError:(id<ESCKotlinSuspendFunction1>)onError __attribute__((swift_name("subscribe(_:onEach:onError:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (id<ESCFlow>)subscribeOn:(id<ESCFlow>)receiver context:(id<ESCKotlinCoroutineContext>)context __attribute__((swift_name("subscribeOn(_:context:)"))) __attribute__((unavailable("Use 'flowOn' instead")));
+ (id<ESCFlow>)switchMap:(id<ESCFlow>)receiver transform:(id<ESCKotlinSuspendFunction1>)transform __attribute__((swift_name("switchMap(_:transform:)"))) __attribute__((unavailable("Flow analogues of 'switchMap' are 'transformLatest', 'flatMapLatest' and 'mapLatest'")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultithreadedDispatchers_commonKt")))
@interface ESCMultithreadedDispatchers_commonKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
+ (ESCCloseableCoroutineDispatcher *)doNewSingleThreadContextName:(NSString *)name __attribute__((swift_name("doNewSingleThreadContext(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultithreadedDispatchersKt")))
@interface ESCMultithreadedDispatchersKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
+ (ESCCloseableCoroutineDispatcher *)doNewFixedThreadPoolContextNThreads:(int32_t)nThreads name:(NSString *)name __attribute__((swift_name("doNewFixedThreadPoolContext(nThreads:name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MutexKt")))
@interface ESCMutexKt : ESCBase
+ (id<ESCMutex>)MutexLocked:(BOOL)locked __attribute__((swift_name("Mutex(locked:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withLock:(id<ESCMutex>)receiver owner:(id _Nullable)owner action:(id _Nullable (^)(void))action completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withLock(_:owner:action:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnTimeoutKt")))
@interface ESCOnTimeoutKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (void)onTimeout:(id<ESCSelectBuilder>)receiver timeMillis:(int64_t)timeMillis block:(id<ESCKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(_:timeMillis:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (void)onTimeout:(id<ESCSelectBuilder>)receiver timeout:(int64_t)timeout block:(id<ESCKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(_:timeout:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface ESCPlatform_iosKt : ESCBase
+ (id<ESCPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProduceKt")))
@interface ESCProduceKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitClose:(id<ESCProducerScope>)receiver block:(void (^)(void))block completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitClose(_:block:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<ESCReceiveChannel>)produce:(id<ESCCoroutineScope>)receiver context:(id<ESCKotlinCoroutineContext>)context capacity:(int32_t)capacity block:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("produce(_:context:capacity:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
+ (id<ESCReceiveChannel>)produce:(id<ESCCoroutineScope>)receiver context:(id<ESCKotlinCoroutineContext>)context capacity:(int32_t)capacity start:(ESCCoroutineStart *)start onCompletion:(void (^ _Nullable)(ESCKotlinThrowable * _Nullable cause))onCompletion block:(id<ESCKotlinSuspendFunction1>)block __attribute__((swift_name("produce(_:context:capacity:start:onCompletion:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReduceKt")))
@interface ESCReduceKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)first:(id<ESCFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("first(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)first:(id<ESCFlow>)receiver predicate:(id<ESCKotlinSuspendFunction1>)predicate completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("first(_:predicate:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)firstOrNull:(id<ESCFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("firstOrNull(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)firstOrNull:(id<ESCFlow>)receiver predicate:(id<ESCKotlinSuspendFunction1>)predicate completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("firstOrNull(_:predicate:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)fold:(id<ESCFlow>)receiver initial:(id _Nullable)initial operation:(id<ESCKotlinSuspendFunction2>)operation completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("fold(_:initial:operation:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)last:(id<ESCFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("last(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)lastOrNull:(id<ESCFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("lastOrNull(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)reduce:(id<ESCFlow>)receiver operation:(id<ESCKotlinSuspendFunction2>)operation completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("reduce(_:operation:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)single:(id<ESCFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("single(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)singleOrNull:(id<ESCFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("singleOrNull(_:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectKt")))
@interface ESCSelectKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)selectBuilder:(void (^)(id<ESCSelectBuilder>))builder completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("select(builder:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectUnbiasedKt")))
@interface ESCSelectUnbiasedKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)selectUnbiasedBuilder:(void (^)(id<ESCSelectBuilder>))builder completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("selectUnbiased(builder:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemaphoreKt")))
@interface ESCSemaphoreKt : ESCBase
+ (id<ESCSemaphore>)SemaphorePermits:(int32_t)permits acquiredPermits:(int32_t)acquiredPermits __attribute__((swift_name("Semaphore(permits:acquiredPermits:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withPermit:(id<ESCSemaphore>)receiver action:(id _Nullable (^)(void))action completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withPermit(_:action:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareKt")))
@interface ESCShareKt : ESCBase
+ (id<ESCSharedFlow>)asSharedFlow:(id<ESCMutableSharedFlow>)receiver __attribute__((swift_name("asSharedFlow(_:)")));
+ (id<ESCStateFlow>)asStateFlow:(id<ESCMutableStateFlow>)receiver __attribute__((swift_name("asStateFlow(_:)")));
+ (id<ESCSharedFlow>)onSubscription:(id<ESCSharedFlow>)receiver action:(id<ESCKotlinSuspendFunction1>)action __attribute__((swift_name("onSubscription(_:action:)")));
+ (id<ESCSharedFlow>)shareIn:(id<ESCFlow>)receiver scope:(id<ESCCoroutineScope>)scope started:(id<ESCSharingStarted>)started replay:(int32_t)replay __attribute__((swift_name("shareIn(_:scope:started:replay:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)stateIn:(id<ESCFlow>)receiver scope:(id<ESCCoroutineScope>)scope completionHandler:(void (^)(id<ESCStateFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stateIn(_:scope:completionHandler:)")));
+ (id<ESCStateFlow>)stateIn:(id<ESCFlow>)receiver scope:(id<ESCCoroutineScope>)scope started:(id<ESCSharingStarted>)started initialValue:(id _Nullable)initialValue __attribute__((swift_name("stateIn(_:scope:started:initialValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedFlowKt")))
@interface ESCSharedFlowKt : ESCBase
+ (id<ESCMutableSharedFlow>)MutableSharedFlowReplay:(int32_t)replay extraBufferCapacity:(int32_t)extraBufferCapacity onBufferOverflow:(ESCBufferOverflow *)onBufferOverflow __attribute__((swift_name("MutableSharedFlow(replay:extraBufferCapacity:onBufferOverflow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateFlowKt")))
@interface ESCStateFlowKt : ESCBase
+ (id<ESCMutableStateFlow>)MutableStateFlowValue:(id _Nullable)value __attribute__((swift_name("MutableStateFlow(value:)")));
+ (id _Nullable)getAndUpdate:(id<ESCMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("getAndUpdate(_:function:)")));
+ (void)update:(id<ESCMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("update(_:function:)")));
+ (id _Nullable)updateAndGet:(id<ESCMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("updateAndGet(_:function:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupervisorKt")))
@interface ESCSupervisorKt : ESCBase
+ (id<ESCCompletableJob>)SupervisorJobParent:(id<ESCJob> _Nullable)parent __attribute__((swift_name("SupervisorJob(parent:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)supervisorScopeBlock:(id<ESCKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("supervisorScope(block:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Synchronized_commonKt")))
@interface ESCSynchronized_commonKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
+ (id _Nullable)synchronizedLock:(ESCAtomicfuSynchronizedObject *)lock block:(id _Nullable (^)(void))block __attribute__((swift_name("synchronized(lock:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SynchronizedKt")))
@interface ESCSynchronizedKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
+ (id _Nullable)synchronizedImplLock:(ESCAtomicfuSynchronizedObject *)lock block:(id _Nullable (^)(void))block __attribute__((swift_name("synchronizedImpl(lock:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutKt")))
@interface ESCTimeoutKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutTimeMillis:(int64_t)timeMillis block:(id<ESCKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeout(timeMillis:block:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutTimeout:(int64_t)timeout block:(id<ESCKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeout(timeout:block:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutOrNullTimeMillis:(int64_t)timeMillis block:(id<ESCKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeoutOrNull(timeMillis:block:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutOrNullTimeout:(int64_t)timeout block:(id<ESCKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeoutOrNull(timeout:block:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransformKt")))
@interface ESCTransformKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<ESCFlow>)chunked:(id<ESCFlow>)receiver size:(int32_t)size __attribute__((swift_name("chunked(_:size:)")));
+ (id<ESCFlow>)filter:(id<ESCFlow>)receiver predicate:(id<ESCKotlinSuspendFunction1>)predicate __attribute__((swift_name("filter(_:predicate:)")));
+ (id<ESCFlow>)filterIsInstance:(id<ESCFlow>)receiver __attribute__((swift_name("filterIsInstance(_:)")));
+ (id<ESCFlow>)filterIsInstance:(id<ESCFlow>)receiver klass:(id<ESCKotlinKClass>)klass __attribute__((swift_name("filterIsInstance(_:klass:)")));
+ (id<ESCFlow>)filterNot:(id<ESCFlow>)receiver predicate:(id<ESCKotlinSuspendFunction1>)predicate __attribute__((swift_name("filterNot(_:predicate:)")));
+ (id<ESCFlow>)filterNotNull:(id<ESCFlow>)receiver __attribute__((swift_name("filterNotNull(_:)")));
+ (id<ESCFlow>)map:(id<ESCFlow>)receiver transform:(id<ESCKotlinSuspendFunction1>)transform __attribute__((swift_name("map(_:transform:)")));
+ (id<ESCFlow>)mapNotNull:(id<ESCFlow>)receiver transform:(id<ESCKotlinSuspendFunction1>)transform __attribute__((swift_name("mapNotNull(_:transform:)")));
+ (id<ESCFlow>)onEach:(id<ESCFlow>)receiver action:(id<ESCKotlinSuspendFunction1>)action __attribute__((swift_name("onEach(_:action:)")));
+ (id<ESCFlow>)runningFold:(id<ESCFlow>)receiver initial:(id _Nullable)initial operation:(id<ESCKotlinSuspendFunction2>)operation __attribute__((swift_name("runningFold(_:initial:operation:)")));
+ (id<ESCFlow>)runningReduce:(id<ESCFlow>)receiver operation:(id<ESCKotlinSuspendFunction2>)operation __attribute__((swift_name("runningReduce(_:operation:)")));
+ (id<ESCFlow>)scan:(id<ESCFlow>)receiver initial:(id _Nullable)initial operation:(id<ESCKotlinSuspendFunction2>)operation __attribute__((swift_name("scan(_:initial:operation:)")));
+ (id<ESCFlow>)withIndex:(id<ESCFlow>)receiver __attribute__((swift_name("withIndex(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhileSelectKt")))
@interface ESCWhileSelectKt : ESCBase

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)whileSelectBuilder:(void (^)(id<ESCSelectBuilder>))builder completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("whileSelect(builder:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("YieldKt")))
@interface ESCYieldKt : ESCBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)yieldWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("yield(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ZipKt")))
@interface ESCZipKt : ESCBase
+ (id<ESCFlow>)combineFlows:(ESCKotlinArray<id<ESCFlow>> *)flows transform:(id<ESCKotlinSuspendFunction1>)transform __attribute__((swift_name("combine(flows:transform:)")));
+ (id<ESCFlow>)combineFlows:(id)flows transform_:(id<ESCKotlinSuspendFunction1>)transform __attribute__((swift_name("combine(flows:transform_:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="flowCombine")
*/
+ (id<ESCFlow>)combine:(id<ESCFlow>)receiver flow:(id<ESCFlow>)flow transform:(id<ESCKotlinSuspendFunction2>)transform __attribute__((swift_name("combine(_:flow:transform:)")));
+ (id<ESCFlow>)combineFlow:(id<ESCFlow>)flow flow2:(id<ESCFlow>)flow2 transform:(id<ESCKotlinSuspendFunction2>)transform __attribute__((swift_name("combine(flow:flow2:transform:)")));
+ (id<ESCFlow>)combineFlow:(id<ESCFlow>)flow flow2:(id<ESCFlow>)flow2 flow3:(id<ESCFlow>)flow3 transform:(id<ESCKotlinSuspendFunction3>)transform __attribute__((swift_name("combine(flow:flow2:flow3:transform:)")));
+ (id<ESCFlow>)combineFlow:(id<ESCFlow>)flow flow2:(id<ESCFlow>)flow2 flow3:(id<ESCFlow>)flow3 flow4:(id<ESCFlow>)flow4 transform:(id<ESCKotlinSuspendFunction4>)transform __attribute__((swift_name("combine(flow:flow2:flow3:flow4:transform:)")));
+ (id<ESCFlow>)combineFlow:(id<ESCFlow>)flow flow2:(id<ESCFlow>)flow2 flow3:(id<ESCFlow>)flow3 flow4:(id<ESCFlow>)flow4 flow5:(id<ESCFlow>)flow5 transform:(id<ESCKotlinSuspendFunction5>)transform __attribute__((swift_name("combine(flow:flow2:flow3:flow4:flow5:transform:)")));
+ (id<ESCFlow>)combineTransformFlows:(ESCKotlinArray<id<ESCFlow>> *)flows transform:(id<ESCKotlinSuspendFunction2>)transform __attribute__((swift_name("combineTransform(flows:transform:)")));
+ (id<ESCFlow>)combineTransformFlows:(id)flows transform_:(id<ESCKotlinSuspendFunction2>)transform __attribute__((swift_name("combineTransform(flows:transform_:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="flowCombineTransform")
*/
+ (id<ESCFlow>)combineTransform:(id<ESCFlow>)receiver flow:(id<ESCFlow>)flow transform:(id<ESCKotlinSuspendFunction3>)transform __attribute__((swift_name("combineTransform(_:flow:transform:)")));
+ (id<ESCFlow>)combineTransformFlow:(id<ESCFlow>)flow flow2:(id<ESCFlow>)flow2 transform:(id<ESCKotlinSuspendFunction3>)transform __attribute__((swift_name("combineTransform(flow:flow2:transform:)")));
+ (id<ESCFlow>)combineTransformFlow:(id<ESCFlow>)flow flow2:(id<ESCFlow>)flow2 flow3:(id<ESCFlow>)flow3 transform:(id<ESCKotlinSuspendFunction4>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:transform:)")));
+ (id<ESCFlow>)combineTransformFlow:(id<ESCFlow>)flow flow2:(id<ESCFlow>)flow2 flow3:(id<ESCFlow>)flow3 flow4:(id<ESCFlow>)flow4 transform:(id<ESCKotlinSuspendFunction5>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:flow4:transform:)")));
+ (id<ESCFlow>)combineTransformFlow:(id<ESCFlow>)flow flow2:(id<ESCFlow>)flow2 flow3:(id<ESCFlow>)flow3 flow4:(id<ESCFlow>)flow4 flow5:(id<ESCFlow>)flow5 transform:(id<ESCKotlinSuspendFunction6>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:flow4:flow5:transform:)")));
+ (id<ESCFlow>)zip:(id<ESCFlow>)receiver other:(id<ESCFlow>)other transform:(id<ESCKotlinSuspendFunction2>)transform __attribute__((swift_name("zip(_:other:transform:)")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol ESCKtor_ioCloseable <ESCKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface ESCKtor_client_coreHttpClient : ESCBase <ESCCoroutineScope, ESCKtor_ioCloseable>
- (instancetype)initWithEngine:(id<ESCKtor_client_coreHttpClientEngine>)engine userConfig:(ESCKtor_client_coreHttpClientConfig<ESCKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (ESCKtor_client_coreHttpClient *)configBlock:(void (^)(ESCKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<ESCKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ESCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<ESCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<ESCKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) ESCKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) ESCKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) ESCKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) ESCKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) ESCKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) ESCKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol ESCKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<ESCKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<ESCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol ESCKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<ESCKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<ESCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol ESCKotlinx_serialization_coreKSerializer <ESCKotlinx_serialization_coreSerializationStrategy, ESCKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface ESCKoin_coreKoin : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (ESCKoin_coreScope *)createScopeT:(id<ESCKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (ESCKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (ESCKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (ESCKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<ESCKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<ESCKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<ESCKotlinKClass>)clazz qualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (ESCKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (ESCKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<ESCKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<ESCKotlinKClass>)clazz qualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (ESCKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (ESCKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<ESCKotlinLazy>)injectQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier mode:(ESCKotlinLazyThreadSafetyMode *)mode parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<ESCKotlinLazy>)injectOrNullQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier mode:(ESCKotlinLazyThreadSafetyMode *)mode parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<ESCKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(ESCKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<ESCKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) ESCKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) ESCKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) ESCKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) ESCKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) ESCKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface ESCKotlinNothing : ESCBase
@end

__attribute__((swift_name("KotlinSequence")))
@protocol ESCKotlinSequence
@required
- (id<ESCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol ESCKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol ESCKotlinSuspendFunction1 <ESCKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface ESCKotlinEnumCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicfuSynchronizedObject.LockState")))
@interface ESCAtomicfuSynchronizedObjectLockState : ESCBase
- (instancetype)initWithStatus:(ESCAtomicfuSynchronizedObjectStatus *)status nestedLocks:(int32_t)nestedLocks waiters:(int32_t)waiters ownerThreadId:(void * _Nullable)ownerThreadId mutex:(ESCAtomicfuNativeMutexNode * _Nullable)mutex __attribute__((swift_name("init(status:nestedLocks:waiters:ownerThreadId:mutex:)"))) __attribute__((objc_designated_initializer));
@property (readonly) ESCAtomicfuNativeMutexNode * _Nullable mutex __attribute__((swift_name("mutex")));
@property (readonly) int32_t nestedLocks __attribute__((swift_name("nestedLocks")));
@property (readonly) void * _Nullable ownerThreadId __attribute__((swift_name("ownerThreadId")));
@property (readonly) ESCAtomicfuSynchronizedObjectStatus *status __attribute__((swift_name("status")));
@property (readonly) int32_t waiters __attribute__((swift_name("waiters")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinAtomicReference")))
@interface ESCKotlinAtomicReference<T> : ESCBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)compareAndExchangeExpected:(T _Nullable)expected newValue:(T _Nullable)newValue __attribute__((swift_name("compareAndExchange(expected:newValue:)")));
- (BOOL)compareAndSetExpected:(T _Nullable)expected newValue:(T _Nullable)newValue __attribute__((swift_name("compareAndSet(expected:newValue:)")));
- (T _Nullable)getAndSetNewValue:(T _Nullable)newValue __attribute__((swift_name("getAndSet(newValue:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol ESCKotlinSuspendFunction0 <ESCKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface ESCKotlinUnit : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol ESCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface ESCKotlinIntIterator : ESCBase <ESCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ESCInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((swift_name("KotlinLongIterator")))
@interface ESCKotlinLongIterator : ESCBase <ESCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ESCLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface ESCKotlinIntProgressionCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (ESCKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface ESCKotlinIntRangeCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) ESCKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongProgression.Companion")))
@interface ESCKotlinLongProgressionCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKotlinLongProgressionCompanion *shared __attribute__((swift_name("shared")));
- (ESCKotlinLongProgression *)fromClosedRangeRangeStart:(int64_t)rangeStart rangeEnd:(int64_t)rangeEnd step:(int64_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange.Companion")))
@interface ESCKotlinLongRangeCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKotlinLongRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) ESCKotlinLongRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol ESCKotlinSuspendFunction2 <ESCKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction3")))
@protocol ESCKotlinSuspendFunction3 <ESCKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface ESCKoin_coreModule : ESCBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (ESCKoin_coreKoinDefinition<id> *)factoryQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(ESCKoin_coreScope *, ESCKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(ESCKotlinArray<ESCKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(ESCKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(ESCKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<ESCKoin_coreModule *> *)plusModules:(NSArray<ESCKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<ESCKoin_coreModule *> *)plusModule:(ESCKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(ESCKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(ESCKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<ESCKoin_coreQualifier>)qualifier scopeSet:(void (^)(ESCKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (ESCKoin_coreKoinDefinition<id> *)singleQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(ESCKoin_coreScope *, ESCKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) ESCMutableSet<ESCKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<ESCKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) ESCMutableDictionary<NSString *, ESCKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@end

__attribute__((swift_name("KotlinSuspendFunction4")))
@protocol ESCKotlinSuspendFunction4 <ESCKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:completionHandler:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction5")))
@protocol ESCKotlinSuspendFunction5 <ESCKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 p5:(id _Nullable)p5 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:p5:completionHandler:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol ESCKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol ESCKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol ESCKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol ESCKotlinKClass <ESCKotlinKDeclarationContainer, ESCKotlinKAnnotatedElement, ESCKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinSuspendFunction6")))
@protocol ESCKotlinSuspendFunction6 <ESCKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 p5:(id _Nullable)p5 p6:(id _Nullable)p6 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:p5:p6:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol ESCKtor_client_coreHttpClientEngine <ESCCoroutineScope, ESCKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(ESCKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(ESCKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(ESCKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) ESCKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) ESCCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<ESCKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface ESCKtor_client_coreHttpClientEngineConfig : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property ESCCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property ESCKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface ESCKtor_client_coreHttpClientConfig<T> : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ESCKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(ESCKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<ESCKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(ESCKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(ESCKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol ESCKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol ESCKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(ESCKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(ESCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(ESCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(ESCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(ESCKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(ESCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(ESCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(ESCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<ESCKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface ESCKtor_eventsEvents : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(ESCKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<ESCDisposableHandle>)subscribeDefinition:(ESCKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(ESCKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface ESCKtor_utilsPipeline<TSubject, TContext> : ESCBase
- (instancetype)initWithPhases:(ESCKotlinArray<ESCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(ESCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<ESCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(ESCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(ESCKtor_utilsPipelinePhase *)reference phase:(ESCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(ESCKtor_utilsPipelinePhase *)reference phase:(ESCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(ESCKtor_utilsPipelinePhase *)phase block:(id<ESCKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<ESCKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(ESCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(ESCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(ESCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(ESCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ESCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<ESCKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface ESCKtor_client_coreHttpReceivePipeline : ESCKtor_utilsPipeline<ESCKtor_client_coreHttpResponse *, ESCKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(ESCKotlinArray<ESCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(ESCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<ESCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ESCKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface ESCKtor_client_coreHttpRequestPipeline : ESCKtor_utilsPipeline<id, ESCKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(ESCKotlinArray<ESCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(ESCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<ESCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ESCKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface ESCKtor_client_coreHttpResponsePipeline : ESCKtor_utilsPipeline<ESCKtor_client_coreHttpResponseContainer *, ESCKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(ESCKotlinArray<ESCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(ESCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<ESCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ESCKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface ESCKtor_client_coreHttpSendPipeline : ESCKtor_utilsPipeline<id, ESCKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(ESCKotlinArray<ESCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(ESCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<ESCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ESCKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol ESCKotlinx_serialization_coreEncoder
@required
- (id<ESCKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<ESCKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<ESCKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<ESCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<ESCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) ESCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol ESCKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<ESCKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<ESCKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<ESCKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) ESCKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol ESCKotlinx_serialization_coreDecoder
@required
- (id<ESCKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<ESCKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (ESCKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<ESCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<ESCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) ESCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface ESCKoin_coreLockable : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface ESCKoin_coreScope : ESCKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<ESCKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(ESCKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<ESCKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (id)getQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<ESCKotlinKClass>)clazz qualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<ESCKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (ESCKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<ESCKotlinKClass>)clazz qualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (ESCKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id _Nullable)getWithParametersClazz:(id<ESCKotlinKClass>)clazz qualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier parameters:(ESCKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("getWithParameters(clazz:qualifier:parameters:)")));
- (id<ESCKotlinLazy>)injectQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier mode:(ESCKotlinLazyThreadSafetyMode *)mode parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<ESCKotlinLazy>)injectOrNullQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier mode:(ESCKotlinLazyThreadSafetyMode *)mode parameters:(ESCKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(ESCKotlinArray<ESCKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<ESCKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(ESCKotlinArray<ESCKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) ESCKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<ESCKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property id _Nullable sourceValue __attribute__((swift_name("sourceValue")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol ESCKoin_coreKoinScopeComponent <ESCKoin_coreKoinComponent>
@required
@property (readonly) ESCKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol ESCKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface ESCKoin_coreParametersHolder : ESCBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(ESCBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (ESCKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<ESCKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<ESCKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (ESCKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) ESCBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol ESCKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface ESCKotlinLazyThreadSafetyMode : ESCKotlinEnum<ESCKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ESCKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) ESCKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) ESCKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (ESCKotlinArray<ESCKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ESCKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface ESCKoin_coreLogger : ESCBase
- (instancetype)initWithLevel:(ESCKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(ESCKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(ESCKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(ESCKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(ESCKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property ESCKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface ESCKoin_coreExtensionManager : ESCBase
- (instancetype)initWith_koin:(ESCKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<ESCKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<ESCKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<ESCKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface ESCKoin_coreInstanceRegistry : ESCBase
- (instancetype)initWith_koin:(ESCKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(ESCKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) ESCKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, ESCKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface ESCKoin_corePropertyRegistry : ESCBase
- (instancetype)initWith_koin:(ESCKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface ESCKoin_coreScopeRegistry : ESCBase
- (instancetype)initWith_koin:(ESCKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<ESCKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) ESCKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<ESCKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicfuSynchronizedObject.Status")))
@interface ESCAtomicfuSynchronizedObjectStatus : ESCKotlinEnum<ESCAtomicfuSynchronizedObjectStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ESCAtomicfuSynchronizedObjectStatus *unlocked __attribute__((swift_name("unlocked")));
@property (class, readonly) ESCAtomicfuSynchronizedObjectStatus *thin __attribute__((swift_name("thin")));
@property (class, readonly) ESCAtomicfuSynchronizedObjectStatus *fat __attribute__((swift_name("fat")));
+ (ESCKotlinArray<ESCAtomicfuSynchronizedObjectStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ESCAtomicfuSynchronizedObjectStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicfuNativeMutexNode")))
@interface ESCAtomicfuNativeMutexNode : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)lock __attribute__((swift_name("lock()")));
- (void)unlock __attribute__((swift_name("unlock()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface ESCKoin_coreKoinDefinition<R> : ESCBase
- (instancetype)initWithModule:(ESCKoin_coreModule *)module factory:(ESCKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (ESCKoin_coreKoinDefinition<R> *)doCopyModule:(ESCKoin_coreModule *)module factory:(ESCKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ESCKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) ESCKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface ESCKoin_coreInstanceFactory<T> : ESCKoin_coreLockable
- (instancetype)initWithBeanDefinition:(ESCKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) ESCKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(ESCKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(ESCKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(ESCKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(ESCKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) ESCKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface ESCKoin_coreSingleInstanceFactory<T> : ESCKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(ESCKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(ESCKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(ESCKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(ESCKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(ESCKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface ESCKoin_coreScopeDSL : ESCBase
- (instancetype)initWithScopeQualifier:(id<ESCKoin_coreQualifier>)scopeQualifier module:(ESCKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (ESCKoin_coreKoinDefinition<id> *)factoryQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(ESCKoin_coreScope *, ESCKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (ESCKoin_coreKoinDefinition<id> *)scopedQualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(ESCKoin_coreScope *, ESCKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) ESCKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<ESCKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface ESCKtor_client_coreHttpRequestData : ESCBase
- (instancetype)initWithUrl:(ESCKtor_httpUrl *)url method:(ESCKtor_httpHttpMethod *)method headers:(id<ESCKtor_httpHeaders>)headers body:(ESCKtor_httpOutgoingContent *)body executionContext:(id<ESCJob>)executionContext attributes:(id<ESCKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<ESCKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ESCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) ESCKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<ESCJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<ESCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) ESCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) ESCKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface ESCKtor_client_coreHttpResponseData : ESCBase
- (instancetype)initWithStatusCode:(ESCKtor_httpHttpStatusCode *)statusCode requestTime:(ESCKtor_utilsGMTDate *)requestTime headers:(id<ESCKtor_httpHeaders>)headers version:(ESCKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<ESCKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<ESCKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<ESCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) ESCKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) ESCKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) ESCKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) ESCKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface ESCKtor_client_coreProxyConfig : ESCBase
- (instancetype)initWithUrl:(ESCKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ESCKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol ESCKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(ESCKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) ESCKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface ESCKtor_utilsAttributeKey<T> : ESCBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(ESCKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (ESCKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(ESCKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface ESCKtor_eventsEventDefinition<T> : ESCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface ESCKtor_utilsPipelinePhase : ESCBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface ESCKtor_client_coreHttpReceivePipelinePhases : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) ESCKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) ESCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) ESCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol ESCKtor_httpHttpMessage
@required
@property (readonly) id<ESCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface ESCKtor_client_coreHttpResponse : ESCBase <ESCKtor_httpHttpMessage, ESCCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ESCKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<ESCKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) ESCKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) ESCKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) ESCKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) ESCKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface ESCKtor_client_coreHttpRequestPipelinePhases : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) ESCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) ESCKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) ESCKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) ESCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) ESCKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol ESCKtor_httpHttpMessageBuilder
@required
@property (readonly) ESCKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface ESCKtor_client_coreHttpRequestBuilder : ESCBase <ESCKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) ESCKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (ESCKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<ESCKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<ESCKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<ESCKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (ESCKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(ESCKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (ESCKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(ESCKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(ESCKtor_httpURLBuilder *, ESCKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<ESCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property ESCKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<ESCJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) ESCKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property ESCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) ESCKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface ESCKtor_client_coreHttpResponsePipelinePhases : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) ESCKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) ESCKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) ESCKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) ESCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) ESCKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface ESCKtor_client_coreHttpResponseContainer : ESCBase
- (instancetype)initWithExpectedType:(ESCKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (ESCKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(ESCKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ESCKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface ESCKtor_client_coreHttpClientCall : ESCBase <ESCCoroutineScope>
- (instancetype)initWithClient:(ESCKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(ESCKtor_client_coreHttpClient *)client requestData:(ESCKtor_client_coreHttpRequestData *)requestData responseData:(ESCKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(ESCKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(ESCKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<ESCKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<ESCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) ESCKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<ESCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<ESCKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property ESCKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface ESCKtor_client_coreHttpSendPipelinePhases : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) ESCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) ESCKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) ESCKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) ESCKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) ESCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol ESCKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<ESCKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ESCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ESCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) ESCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface ESCKotlinx_serialization_coreSerializersModule : ESCBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<ESCKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ESCKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<ESCKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<ESCKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ESCKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ESCKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ESCKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ESCKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol ESCKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface ESCKotlinx_serialization_coreSerialKind : ESCBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol ESCKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<ESCKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ESCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ESCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<ESCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) ESCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol ESCKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(ESCKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface ESCKoin_coreLevel : ESCKotlinEnum<ESCKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ESCKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) ESCKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) ESCKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) ESCKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) ESCKoin_coreLevel *none __attribute__((swift_name("none")));
+ (ESCKotlinArray<ESCKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ESCKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol ESCKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onRegisterKoin:(ESCKoin_coreKoin *)koin __attribute__((swift_name("onRegister(koin:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface ESCKoin_coreScopeRegistryCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface ESCKoin_coreBeanDefinition<T> : ESCBase
- (instancetype)initWithScopeQualifier:(id<ESCKoin_coreQualifier>)scopeQualifier primaryType:(id<ESCKotlinKClass>)primaryType qualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(ESCKoin_coreScope *, ESCKoin_coreParametersHolder *))definition kind:(ESCKoin_coreKind *)kind secondaryTypes:(NSArray<id<ESCKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<ESCKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<ESCKotlinKClass>)clazz qualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<ESCKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property ESCKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(ESCKoin_coreScope *, ESCKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) ESCKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<ESCKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<ESCKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<ESCKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<ESCKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface ESCKoin_coreInstanceFactoryCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreResolutionContext")))
@interface ESCKoin_coreResolutionContext : ESCBase
- (instancetype)initWithLogger:(ESCKoin_coreLogger *)logger scope:(ESCKoin_coreScope *)scope clazz:(id<ESCKotlinKClass>)clazz qualifier:(id<ESCKoin_coreQualifier> _Nullable)qualifier parameters:(ESCKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:clazz:qualifier:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<ESCKotlinKClass> clazz __attribute__((swift_name("clazz")));
@property (readonly) NSString *debugTag __attribute__((swift_name("debugTag")));
@property (readonly) ESCKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) ESCKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) id<ESCKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) ESCKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol ESCKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface ESCKtor_httpUrl : ESCBase <ESCKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) ESCKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<ESCKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) ESCKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) ESCKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface ESCKtor_httpHttpMethod : ESCBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (ESCKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol ESCKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<ESCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol ESCKtor_httpHeaders <ESCKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface ESCKtor_httpOutgoingContent : ESCBase
- (id _Nullable)getPropertyKey:(ESCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(ESCKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<ESCKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) ESCLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) ESCKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<ESCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) ESCKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface ESCKtor_httpHttpStatusCode : ESCBase <ESCKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(ESCKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (ESCKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (ESCKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface ESCKtor_utilsGMTDate : ESCBase <ESCKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(ESCKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(ESCKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(ESCKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (ESCKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (ESCKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(ESCKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(ESCKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) ESCKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) ESCKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface ESCKtor_httpHttpProtocolVersion : ESCBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (ESCKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface ESCKtor_utilsTypeInfo : ESCBase
- (instancetype)initWithType:(id<ESCKotlinKClass>)type kotlinType:(id<ESCKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<ESCKotlinKClass>)type reifiedType:(id<ESCKotlinKType>)reifiedType kotlinType:(id<ESCKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ESCKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<ESCKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol ESCKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(ESCBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause__:(ESCKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause__:)")));
@property (readonly) ESCKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<ESCKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol ESCKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<ESCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<ESCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<ESCKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<ESCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface ESCKtor_utilsStringValuesBuilderImpl : ESCBase <ESCKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<ESCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<ESCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<ESCKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<ESCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) ESCMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface ESCKtor_httpHeadersBuilder : ESCKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<ESCKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface ESCKtor_client_coreHttpRequestBuilderCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface ESCKtor_httpURLBuilder : ESCBase
- (instancetype)initWithProtocol:(ESCKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<ESCKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (ESCKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<ESCKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<ESCKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property ESCKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property ESCKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface ESCKtor_client_coreHttpClientCallCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol ESCKtor_client_coreHttpRequest <ESCKtor_httpHttpMessage, ESCCoroutineScope>
@required
@property (readonly) id<ESCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) ESCKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) ESCKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) ESCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) ESCKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol ESCKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<ESCKotlinKClass>)kClass provider:(id<ESCKotlinx_serialization_coreKSerializer> (^)(NSArray<id<ESCKotlinx_serialization_coreKSerializer>> *typeArgumentsSerializers))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<ESCKotlinKClass>)kClass serializer:(id<ESCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<ESCKotlinKClass>)baseClass actualClass:(id<ESCKotlinKClass>)actualClass actualSerializer:(id<ESCKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<ESCKotlinKClass>)baseClass defaultDeserializerProvider:(id<ESCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<ESCKotlinKClass>)baseClass defaultDeserializerProvider:(id<ESCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<ESCKotlinKClass>)baseClass defaultSerializerProvider:(id<ESCKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id value))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface ESCKoin_coreKind : ESCKotlinEnum<ESCKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ESCKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) ESCKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) ESCKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (ESCKotlinArray<ESCKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ESCKoin_coreKind *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface ESCKoin_coreCallbacks<T> : ESCBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (ESCKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface ESCKtor_httpUrlCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<ESCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol ESCKtor_httpParameters <ESCKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface ESCKtor_httpURLProtocol : ESCBase <ESCKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (ESCKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface ESCKtor_httpHttpMethodCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (ESCKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<ESCKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) ESCKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) ESCKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) ESCKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) ESCKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) ESCKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) ESCKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) ESCKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol ESCKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface ESCKtor_httpHeaderValueWithParameters : ESCBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<ESCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<ESCKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface ESCKtor_httpContentType : ESCKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<ESCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<ESCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ESCKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(ESCKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (ESCKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (ESCKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface ESCKtor_httpHttpStatusCodeCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (ESCKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) ESCKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) ESCKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) ESCKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) ESCKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) ESCKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) ESCKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) ESCKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) ESCKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) ESCKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) ESCKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) ESCKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) ESCKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) ESCKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) ESCKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) ESCKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) ESCKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) ESCKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) ESCKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) ESCKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) ESCKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) ESCKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) ESCKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) ESCKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) ESCKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) ESCKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) ESCKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) ESCKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) ESCKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) ESCKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) ESCKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) ESCKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) ESCKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) ESCKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) ESCKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) ESCKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) ESCKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) ESCKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) ESCKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) ESCKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) ESCKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) ESCKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) ESCKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) ESCKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) ESCKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) ESCKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) ESCKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) ESCKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) ESCKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) ESCKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) ESCKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) ESCKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) ESCKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) ESCKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<ESCKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface ESCKtor_utilsWeekDay : ESCKotlinEnum<ESCKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ESCKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) ESCKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) ESCKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) ESCKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) ESCKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) ESCKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) ESCKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) ESCKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (ESCKotlinArray<ESCKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ESCKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface ESCKtor_utilsMonth : ESCKotlinEnum<ESCKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ESCKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) ESCKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) ESCKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) ESCKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) ESCKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) ESCKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) ESCKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) ESCKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) ESCKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) ESCKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) ESCKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) ESCKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) ESCKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (ESCKotlinArray<ESCKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ESCKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface ESCKtor_utilsGMTDateCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<ESCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) ESCKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface ESCKtor_httpHttpProtocolVersionCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (ESCKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (ESCKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) ESCKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) ESCKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) ESCKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) ESCKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) ESCKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol ESCKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<ESCKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<ESCKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol ESCKotlinx_io_coreRawSource <ESCKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(ESCKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol ESCKotlinx_io_coreSource <ESCKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<ESCKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(ESCKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<ESCKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<ESCKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) ESCKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface ESCKtor_httpURLBuilderCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol ESCKtor_httpParametersBuilder <ESCKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface ESCKtor_httpURLProtocolCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (ESCKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) ESCKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) ESCKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) ESCKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) ESCKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) ESCKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, ESCKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface ESCKtor_httpHeaderValueParam : ESCBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (ESCKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface ESCKtor_httpHeaderValueWithParametersCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<ESCKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface ESCKtor_httpContentTypeCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (ESCKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) ESCKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface ESCKtor_utilsWeekDayCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (ESCKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (ESCKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface ESCKtor_utilsMonthCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (ESCKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (ESCKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface ESCKotlinKTypeProjection : ESCBase
- (instancetype)initWithVariance:(ESCKotlinKVariance * _Nullable)variance type:(id<ESCKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ESCKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (ESCKotlinKTypeProjection *)doCopyVariance:(ESCKotlinKVariance * _Nullable)variance type:(id<ESCKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ESCKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) ESCKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface ESCKotlinByteArray : ESCBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ESCByte *(^)(ESCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ESCKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol ESCKotlinx_io_coreRawSink <ESCKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(ESCKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol ESCKotlinx_io_coreSink <ESCKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<ESCKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<ESCKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(ESCKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) ESCKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface ESCKotlinx_io_coreBuffer : ESCBase <ESCKotlinx_io_coreSource, ESCKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (ESCKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(ESCKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<ESCKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(ESCKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(ESCKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<ESCKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<ESCKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<ESCKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(ESCKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<ESCKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(ESCKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) ESCKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface ESCKotlinKVariance : ESCKotlinEnum<ESCKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ESCKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) ESCKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) ESCKotlinKVariance *out __attribute__((swift_name("out")));
+ (ESCKotlinArray<ESCKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ESCKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface ESCKotlinKTypeProjectionCompanion : ESCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ESCKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (ESCKotlinKTypeProjection *)contravariantType:(id<ESCKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (ESCKotlinKTypeProjection *)covariantType:(id<ESCKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (ESCKotlinKTypeProjection *)invariantType:(id<ESCKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) ESCKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface ESCKotlinByteIterator : ESCBase <ESCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ESCByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
