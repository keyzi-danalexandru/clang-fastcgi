https://github.com/jeremyhuiskamp/golang-docker-scratch/blob/master/Dockerfile

FROM alpine as build

WORKDIR /usr/src/app

COPY . .



FROM alpine

RUN apk add spawn-fcgi

WORKDIR /app

COPY main run-this

ENTRYPOINT [ "/bin/sh" ]

# ENTRYPOINT [ "spawn-fcgi", "-p9000", "-n", "/app/run-this" ]