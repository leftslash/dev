# Makefile

SHELL               := /bin/bash

image_name          := test
image_version       := latest
container_tag       := test

host_dir            := ./workspace
container_dir       := /home/todd/workspace


build: Dockerfile
	docker build --tag $(image_name):$(image_version) .

run: Dockerfile
	docker run -it --name $(container_tag) --volume=$(host_dir):$(container_dir) $(image_name):$(image_version)

start: Dockerfile
	docker start -ai $(container_tag)

list:
	docker images
	@echo
	docker ps -a

cleanall: clean
	docker rmi -f $(image_name):$(image_version)
	docker buildx prune -f

clean:
	docker rm -f $(container_tag)
